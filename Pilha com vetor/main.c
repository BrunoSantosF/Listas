#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.h"


int main(void){

    Aluno *a1,*a2,*a3,*a4;

    a1 = InsereAluno("Bruno",1);
    a2 = InsereAluno("gatti",2);
    a3 = InsereAluno("thiago",3);
    a4 = InsereAluno("luca",4);


    Pilha * pilha = inicializandoPilha();
    printf("\n=============== Pilha atual ===========\n\n");
    ImprimiPilha( pilha);

    InserindoNaPilha( pilha ,a1);
    InserindoNaPilha( pilha ,a2);

    ImprimiPilha( pilha);
    printf("\n=============== Retirando o ultimo aluno ===========\n");
    Aluno * aux = RetiraAlunoDoVetor(pilha);
    ImprimiPilha( pilha);

    InserindoNaPilha( pilha ,a3);
    InserindoNaPilha( pilha ,a4);
    
    printf("\n=============== Retirando o ultimo aluno ===========\n");
    aux = RetiraAlunoDoVetor(pilha);

    ImprimiPilha( pilha);

    LiberarAluno(a1);
    LiberarAluno(a2);
    LiberarAluno(a3);
    LiberarAluno(a4);
    LiberaPilha(pilha);


}