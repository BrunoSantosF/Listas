#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.h"

#define tam 10

struct pilha {
    Aluno * vetor[tam];
    int topo;
};

//Iniciando a pilha com o topo igual a 0
Pilha * inicializandoPilha(){
    Pilha * pilha = malloc(sizeof(Pilha));
    pilha->topo = 0;

    return pilha;
}

//inserindo no começo da pilha
void InserindoNaPilha(Pilha * pilha ,Aluno * aluno){
    if (pilha->topo > tam || aluno == NULL ){
        printf("houve algum erro\n");
        exit(1);
    }

    pilha->vetor[pilha->topo] = aluno; //vai adicionar na posição que o vetor topo está
    pilha->topo++; //incrementa o vetor topo está
}

Aluno * RetiraAlunoDoVetor(Pilha * pilha){
    if (pilha->topo <= 0){
        printf("Ha algum erro\n");
        exit(1);
    }

    Aluno * aluno = pilha->vetor[pilha->topo];
    pilha->topo--;

    return aluno;

}

void ImprimiPilha(Pilha * pilha){

    for(int i =0;i < pilha->topo;i++){
        PrintarAluno(pilha->vetor[i]);
    }

}

void LiberaPilha(Pilha * pilha){
    free(pilha);
}

