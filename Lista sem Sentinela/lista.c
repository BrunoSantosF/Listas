#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"


struct lista{
    Aluno * aluno;
    Lista * prox;
};


Lista * inicializaLista(){
    return NULL;
}

Lista * InsereLista(Lista * lista, Aluno * aluno){
    Lista *  aux = malloc(sizeof(Lista));
    aux->aluno = aluno;
    aux->prox = lista;

    return aux;

}

Lista * RetiraAlunoDaLista(Lista * lista,char * nome){

    if (lista == NULL){
        return NULL;
    }
    Lista * aux = lista;
    Lista * auxAnt = NULL;
   
    while (strcmp(nome,RetornaNome(aux->aluno)) && aux != NULL){
        auxAnt = aux;
        aux = aux->prox;   
        
    }

    printf("Retirando o aluno: %s\n",RetornaNome(aux->aluno));

    if (auxAnt == NULL){
        lista = lista->prox;
    } 
    else {
        auxAnt->prox = aux->prox;
    }
    
    LiberarAluno(aux->aluno);
    free(aux);

    return lista;

}

void ImprimiLista(Lista * lista){
    Lista * aux;
    for (aux  = lista ;aux != NULL;aux =aux->prox){
        PrintarAluno(aux->aluno);

    }
}


void FreeList(Lista * lista){
    Lista * l= lista;
    Lista * p;
    
    while (l){
        p = l->prox; 
        LiberarAluno(l->aluno);
        free(l);
        l = p;
    }
    
}









