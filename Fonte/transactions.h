#define FTRANSACTION 1 // flag controlar os includes

#ifndef FMACROS // garante que macros.h não seja reincluída
   #include "macros.h"
#endif
///
#ifndef FTYPES // garante que types.h não seja reincluída
  #include "types.h"
#endif

#ifndef FBUFFER // garante que buffer.h não seja reincluída
  #include "buffer.h"
#endif

#ifndef FDICTIONARY // the same
  #include "dictionary.h"
#endif


typedef struct t_action{
    int tipo;               //Tipo de ação
    rc_insert data;             //Informações
    void *extra ;              //Informações extras
}T_action;

/*================================
Descrição: Insere no log uma nova operação
Recebe: Pilha do log, valores utilizados, tipo de operação
Retorna: -
==================================*/
void new_action(Pilha* log, rc_insert *insert, int op);

/*================================
Descrição: Função chamada para executar as operações do log em rollback
Recebe: Log
Retorna: Resultado da operação
==================================*/
int rollback(Pilha *log);

/*================================
Descrição: Commita a transação. Ou seja, limpa o log para que as operações
           até aquele ponto não sejam desfeitas
Recebe: Log
Retorna: -
==================================*/
void commit_transaction_log(Pilha* log);

/*================================
Descrição: Função auxiliar para debug que lê as ações em log (consome o log);
Recebe: Log
Retorna: -
==================================*/
void read_print_log(Pilha* log);

/*================================
Descrição: Faz uma cópia da estrtura rc_insert. Utilizado para salvar corretamente as ações na pilha de log
Recebe: rc_insert a ser copiada
Retorna: Cópia da estrutura passada como parâmetro
==================================*/
rc_insert copy_rc_insert(rc_insert *i);

/*================================
Descrição: Recupera uma tabela excluida durante a transação
Recebe: Nome da tabela
Retorna: -
==================================*/
void restoreTable(char *tableName, table *t);
