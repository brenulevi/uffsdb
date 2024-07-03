#define FTRANSACTION 1 // flag controlar os includes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

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

void read_print_log(Pilha* log);

rc_insert copy_rc_insert(rc_insert *i);
