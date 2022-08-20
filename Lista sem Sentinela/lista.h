#ifndef lista_h
#define lista_h


typedef struct lista Lista;

Lista * inicializaLista();
Lista * InsereLista(Lista * lista, Aluno * aluno);
Lista * RetiraAlunoDaLista(Lista * lista,char * nome);
void ImprimiLista(Lista * lista);
void FreeList(Lista * lista);


#endif