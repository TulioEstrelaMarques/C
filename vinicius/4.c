#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vet[10],vet2[10];
    printf("Digite 10 numero qualquer: ");
    for(i=0;i<10;i++){
        scanf("%d",&vet[i]);

        if(vet[i]<=0){
            vet2[i]=vet[i];
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",vet2[i]);
    }

}
