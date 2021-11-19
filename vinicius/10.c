#include <stdio.h>

int main(){
    int v[10],i,v2[10],v3[10];
    printf("Digite os valores pro vetor: ");
    for(i=0;i<10;i++)
        scanf("%d",v[i]);
    for(i=0;i<10;i++){
        if(v[i]%2==0)
            v2[i]=v[i];
        else
            v3[i]=v[i];
    }
    printf("\nVetor par");
    for(i=0;i<10;i++)
        printf("%d",v2[i]);

    printf("\nVetor impar");
    for(i=0;i<10;i++)
        printf("%d",v3[i]);
}
