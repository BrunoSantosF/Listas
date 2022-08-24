#include <stdlib.h>
#include <stdio.h>

int compara(const void * x,const void * y){
    return  ( int ) (*(int *) x - *(int*) y); 
}

int ImprimiVetor(int *vetor){
    for (int i =0 ;i < 5;i++){
        printf("%d \n",vetor[i]);
    }
}

int main(){
    int vetor[5] = {5,4,3,3,1};
    //ImprimiVetor(vetor);
    qsort(vetor,5,sizeof(int),compara);
    ImprimiVetor(vetor);
    

    return 0;
}

