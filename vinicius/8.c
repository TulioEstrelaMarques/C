#include <stdio.h>

int main(){
    int v[15],i;
    printf("Lendo o vetor: ");
    for(i=0;i<15;i++)
        scanf("%d",v[i]);
    printf("\nVerificando...\n");
    for(i=0;i<15;i++){
        if(v[i]==30)
            printf("o elemento 30 foi encontrado na posiçao %d",i+1);
    }
}
