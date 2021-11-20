#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *vet){
    for(int i=0; i<5; i++){
        //vet[i]=vet[i]+1;
        *vet+=1;
        vet++;
    }
}

int main(){
    int v[5]={0,1,2,3,4};
    printf("Antes...\n");
    for(int i=0; i<5; i++)
            printf("%d ",v[i]);
    printf("\nDepois...\n");
    lerVetor(v);
    for(int i=0; i<5; i++)
            printf("%d ",v[i]);
}
