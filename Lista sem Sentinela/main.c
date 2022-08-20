#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"


int main(){

    Aluno *a1,*a2,*a3;

    a1 = InsereAluno("bruno",1);
    a2 = InsereAluno("luca",2);
    a3 = InsereAluno("thiago",3);

    Lista * lista; 

    lista =  InsereLista(lista,a1);
    lista =  InsereLista(lista,a2);
    lista =  InsereLista(lista,a3);

    ImprimiLista(lista);

    printf("\n===============Retirando aluno =============\n");
    lista = RetiraAlunoDaLista(lista,"luca");


    ImprimiLista(lista);

    FreeList(lista);

    return 0;
}