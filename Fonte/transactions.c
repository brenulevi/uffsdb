
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FTRANSACTION
   #include "transactions.h"
#endif
#ifndef FUTILITY
   #include "utility.h"
#endif
#ifndef FMISC
   #include "misc.h"
#endif
#ifndef FDATABASE
   #include "database.h"
#endif
#ifndef FSQLCOMMANDS
   #include "sqlcommands.h"
#endif
#ifndef FPARSER
   #include "interface/parser.h"
#endif
#ifndef FMACROS // garante que macros.h não seja reincluída
   #include "macros.h"
#endif
#ifndef FTYPES // garante que types.h não seja reincluída
  #include "types.h"
#endif

#ifndef FBUFFER // garante que buffer.h não seja reincluída
  #include "buffer.h"
#endif

#ifndef FDICTIONARY // the same
  #include "dictionary.h"
#endif



void new_action(Pilha* log, rc_insert *data, int op){
   rc_insert newData = copy_rc_insert(data, op);

   T_action *novaAcao = malloc(sizeof(T_action));
   novaAcao->tipo = op;
   novaAcao->data = newData;

   if(op == OP_DROP_TABLE){   //Se for drop table é necessário salvar algumas informações extras para que a tabela possa ser inserida nos dicionários depois.

      struct fs_objects *obj = malloc(sizeof(struct fs_objects));
      tp_table **tbl = malloc(sizeof(tp_table));
      tp_table *tabela = abreTabela(data->objName, obj, tbl);

      table *t = malloc(sizeof(table));
      strcpy(t->nome, data->objName);
      t->esquema = tabela;

      novaAcao->extra = t;

   }
   push(log, novaAcao);

}

void commit_transaction_log(Pilha* log){

   read_print_log(log);
   log = novaPilha();

}

int commit(Pilha* log)
{
   while(log->tam > 0)
   {
      T_action* action = pop(log);

      switch(action->tipo)
      {
         case OP_INSERT:
            //printf("%s\n", action->data.objName);
            if(action->data.N > 0)
            {
               insert(&action->data);
            }
            break;
      }
   }

   return 0;
}

int rollback(Pilha *log){

     while(log->tam>0){
      
      T_action *acao = pop(log);
      rc_insert data = acao->data;

      switch(acao->tipo){  

         case OP_CREATE_DATABASE:

            printf("Ação desfeita: OP_CREATE_DATABASE (%s)\n", data.objName);
            dropDatabase(data.objName);
            break;
         
         /*case OP_CREATE_INDEX:

            printf("Ação : OP_CREATE_INDEX | Em %s\n", data.objName);
            break;*/

         case OP_CREATE_TABLE:

            printf("Ação desfeita: OP_CREATE_TABLE (%s)\n", data.objName);
            excluirTabela(data.objName);
            break;

         case OP_DROP_DATABASE:

            printf("Ação desfeita: OP_DROP_DATABASE (%s)\n", data.objName);
            restoreDatabase(data.objName);

            break;

         case OP_DROP_TABLE:

            printf("Ação desfeita: OP_DROP_TABLE (%s)\n", data.objName);
            restoreTable(data.objName, acao->extra);
            break;

         case OP_INSERT:

            printf("Ação: OP_INSERT | Em %s\n", data.objName);
            break;

      }

   }

   return 0;
}

void read_print_log(Pilha* log){

   while(log->tam>0){
      
      T_action *acao = pop(log);
      rc_insert data = acao->data;

      switch(acao->tipo){  

         case OP_CREATE_DATABASE:

            printf("Ação: OP_CREATE_DATABASE | Em %s\n", data.objName);
            break;
         
         case OP_CREATE_INDEX:

            printf("Ação: OP_CREATE_INDEX | Em %s\n", data.objName);
            break;

         case OP_CREATE_TABLE:

            printf("Ação: OP_CREATE_TABLE | Em %s\n", data.objName);
            break;

         case OP_DROP_DATABASE:

            printf("Ação: OP_DROP_DATABASE | Em %s\n", data.objName);
            break;

         case OP_DROP_TABLE:

            printf("Ação: OP_DROP_TABLE | Em %s\n", data.objName);
            break;

         case OP_INSERT:

            printf("Ação: OP_INSERT | Em %s\n", data.objName);
            break;

      }

   }
}

rc_insert copy_rc_insert(rc_insert* i, int operation){

   rc_insert copy;

   copy.objName = malloc(sizeof(i->objName));
   strcpy(copy.objName, i->objName);

   copy.type = malloc(sizeof(i->type));
   strcpy(copy.type, i->type);
   copy.N = i->N;

   copy.attribute = malloc(sizeof(int));
   copy.attribute = i->attribute;

   if(operation == OP_INSERT)
      copy.columnName = 0;
   else
      copy.columnName = malloc(i->N * sizeof(char*));

   copy.values = malloc(i->N * sizeof(char*));
   copy.fkColumn = malloc(i->N * sizeof(char*));
   copy.fkTable = malloc(i->N * sizeof(char*));

   for (int j = 0; j < i->N; j++ ) {

        if (i->columnName){
            copy.columnName[j] = malloc(sizeof(i->columnName[j]));
            strcpy(copy.columnName[j], i->columnName[j]);
        }
   
        if (i->values){
            copy.values[j] = malloc(sizeof(i->values[j]));
            strcpy(copy.values[j], i->values[j]);
        }

        if (i->fkColumn){
            copy.fkColumn[j] = malloc(sizeof(i->fkColumn[j]));
            strcpy(copy.fkColumn[j], i->fkColumn[j]);
        }

        if (i->fkTable){
            copy.fkTable[j] = malloc(sizeof(i->fkTable[j]));
            strcpy(copy.fkTable[j], i->fkTable[j]);
        }
   }

   return copy;
}

void restoreTable(char *tableName, table *t){

   char* tablePath = malloc(strlen(tableName)+20);

   strcpy(tablePath, "mv data/log_temp/");
   strcat(tablePath, tableName);

   strcat(tablePath, ".dat ");
   strcat(tablePath, connected.db_directory);

   //printf("%s\n", tablePath);
   system(tablePath);

   finalizaTabela(t);
}