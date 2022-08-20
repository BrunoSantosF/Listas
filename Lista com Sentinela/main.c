#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"

/*
- inicialização da lista vazia;
- inserção de aluno na última posição;
- retirada de aluno por nome (chave de busca);
- liberação da memória alocada para a lista;

*/

int main(){
    Aluno * a1,*a2,*a3,*a4,*a5;

    a1 = InsereAluno("bruno",1);
    a2 = InsereAluno("luca",2);
    a3 = InsereAluno("carlos",3);    
    a4 = InsereAluno("joao",4);
    a5 = InsereAluno("thiago",5);

    Lista * lista = IniciaLista();

    lista = InsereNaLista(a1,lista);
    lista = InsereNaLista(a2,lista);
    lista = InsereNaLista(a3,lista);
    lista = InsereNaLista(a4,lista);
    lista = InsereNaLista(a5,lista);

    ImprimiLista(lista);
    printf("\n================================================\n");
    RetiraAlunoDalista(lista,"thiago"); //Retira aluno da lista ....
    ImprimiLista(lista);

    printf("\n================================================\n");
    Aluno * aux = BuscaAlunoNaLista(lista,"bruno");
    printf("Buscou o aluno: %s\n",RetornaNome(aux));
    
    LimpaLista(lista);


    return 0;
}

















