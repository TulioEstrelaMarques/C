#include <stdio.h>

int main(){
    int i,v1[10],v2[10],v3[10];
    printf("Vetor v1: ");
    for(i=0;i<10;i++)
        scanf("%d",v1[i]);
    printf("\nVetor v2: ");
    for(i=0;i<10;i++){
        scanf("%d",v2[i]);
        v3[i]= v1[i]*v2[i];
    }
    printf("\nV3: resultado\n");
    for(i=0;i<10;i++)
        printf("%d",v3[i]);

}
