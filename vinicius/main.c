#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[9],vet[9];
    for(int i=0;i<9;i++){
        printf("Digite o %do valores para o vetor: ",i+1);
        scanf("%d",&vetor[i]);
        }
    for(int i=0;i<9; i++){
            if(vetor[i] %2==0)
                printf("o numero %d e par e sua posicao e %d\n",vetor[i],i+1);
    }


    return 0;
}
