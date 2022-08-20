#ifndef lista_h
#define lista_h
#include "aluno.h"

typedef struct lista Lista;

Lista * IniciaLista();
Lista * InsereNaLista(Aluno * aluno , Lista * lista);
void ImprimiLista(Lista * lista);
Aluno * BuscaAlunoNaLista(Lista * lista,char * nome);
void LimpaLista(Lista * lista);
void RetiraAlunoDalista(Lista * lista,char * nome);
#endif