#include <stdio.h>

int main(){
    int i,vet[7];
    printf("Carregando o vetor: ");
    for(i=0;i<7;i++)
        scanf("%d",&vet[i]);

    for(i=0;i<7;i++){
        if(vet[i]%2==0 && vet[i]%3==0)
            printf("\n%d eh multiplo de 2 e 3",vet[i]);
        else if(vet[i]%2==0)
            printf("\n%d eh multiplo de 2",vet[i]);
        else if(vet[i]%3==0)
            printf("\n%d eh multiplo de 3",vet[i]);
    }

}
