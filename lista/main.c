#include <stdio.h>
#include <stdlib.h>


void quadrado(float vet1[], float vet2[]);
int main(){
    int i;
    float vet1[10],vet2[10];
    for(i=0;i<=10;i++){
        scanf("%f",&vet1[i]);
    }
    quadrado(vet1,vet2);

    return 0;
}
void quadrado(float vet1[], float vet2[]){
    int i;
    for(i=0;i<=10;i++){
        vet2[i]=vet1[i]*vet1[i];
    }
    printf("\n----------------\n");
    for(i=0;i<10;i++){
    printf("%.2f ",vet1[i]);
    }
    printf("\n----------------\n");
    for(i=0;i<10;i++){
        printf("%.2f ",vet2[i]);
    }
}
