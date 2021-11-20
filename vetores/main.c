#include <stdio.h>
#include <stdlib.h>
int mostrarVetor(int vet[]);
int main(){
    int vet1[10];
    int vet2[] = {10,9,8,7,6,5,4,3,2,1};
    for(int i = 0; i<10; i++){
        printf("%do. elemento do vetor: ",i+1);
        scanf("%d",&vet1[i]);
    }
    printf("--------Vetor-1--------\n");
    mostrarVetor(vet1);
    printf("\n--------Vetor-2--------\n");
    mostrarVetor(vet2);
    printf("\n-------Soma-dos-Vetores------\n");
    for(int i = 0; i<10; i++){
        printf("%d, ",vet1[i]+vet2[i]);
    }
    return 0;
}
int mostrarVetor(int vet[]){
    for(int i = 0; i<10; i++){
        printf("%d, ",vet[i]);
    }
}
