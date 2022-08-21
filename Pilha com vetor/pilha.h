#ifndef pilha_h
#define pilha_h

typedef struct pilha Pilha;


Pilha * inicializandoPilha();
void InserindoNaPilha(Pilha * pilha ,Aluno * aluno);
Aluno * RetiraAlunoDoVetor(Pilha * pilha);
void ImprimiPilha(Pilha * pilha);
void LiberaPilha(Pilha * pilha);


#endif 