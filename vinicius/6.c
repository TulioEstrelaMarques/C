#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,v1[10],v2[10],v3[20];

    printf("Vetor 1: ");
    for(i=0;i<10;i++)
        scanf("%d",&v1[i]);

    printf("\nVetor 2: ");
    for(i=0;i<10;i++)
        scanf("%d",&v1[i]);

    printf("\nVetor 1: ");
    for(i=0;i<10;i++)
        printf("%d\n",v1[i]);

    printf("\nVetor 2: ");
    for(i=0;i<10;i++)
        printf("%d\n",v2[i]);

    for(i=0;i<10;i++)
        v3[i]=v1[i];

    for(i=10;i<20;i++)
        v3[i]=v1[i-10];

    system("cls");
    printf("\nVetor 3: ");
    for(i=0;i<20;i++)
        printf("%d\n",v3[i]);
}

