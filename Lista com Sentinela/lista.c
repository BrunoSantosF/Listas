#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"

typedef struct cell Cell;

struct cell {
    Aluno * aluno;
    Cell * prox;
};

struct lista {
    Cell * prim;
    Cell * ult;
};

Lista * IniciaLista(){
    Lista * lista = malloc(sizeof(Lista));
    lista->prim = lista->prim = NULL;

    return lista;
}

Lista * InsereNaLista(Aluno * aluno , Lista * lista){
    Cell * listaAux = malloc(sizeof(Cell));
    listaAux->aluno = aluno;
    listaAux->prox = NULL;

    if (lista->prim == NULL){
        lista->prim = listaAux;
        lista->ult = listaAux;
    }
    else {
        lista->ult->prox = listaAux;
        lista->ult = listaAux;
    }

    return lista;    
}

void ImprimiLista(Lista * lista){
    Cell * aux =  lista->prim;

    for (aux;aux != NULL ;aux =aux->prox){
        PrintarAluno(aux->aluno);
    }

}

void RetiraAlunoDalista(Lista * lista,char * nome){

    if (lista == NULL){
        return;
    }
    Cell * celula = lista->prim;
    Cell * celulaAnterior = NULL;

    while (strcmp(nome,RetornaNome(celula->aluno)) != 0){
        celulaAnterior = celula;
        celula = celula->prox;
    }

    if (lista->prim == celula){ // começo da lista 
        lista->prim = celula->prox;
    }
    else if (lista->ult == celula){ //final da lista
        lista->ult = celulaAnterior;
        celulaAnterior->prox = NULL;
    }
    else { //Meio da lista;
        celulaAnterior->prox = celula->prox;
    }

    LiberarAluno(celula->aluno);
    free(celula);
}


Aluno * BuscaAlunoNaLista(Lista * lista,char * nome){
    Cell * aluno = lista->prim;

    for (aluno;aluno != NULL;aluno = aluno->prox){
        if (!strcmp(nome,RetornaNome(aluno->aluno))){
            return aluno->aluno;
        }
    }

    return NULL;

}

void LimpaLista(Lista * lista){
    Cell * aux1 = lista->prim;
    Cell * aux2 = NULL;

    while (aux1){
        aux2 = aux1->prox;
        LiberarAluno(aux1->aluno);
        free(aux1);
        aux1 = aux2;
    }
    free(lista);
}






