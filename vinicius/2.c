#include <stdio.h>

int main(){
    int vet[8], vet2[8],vet3[8],i;
    for(i=0;i<8;i++){
        printf("digite o %d valores do vetor: " ,i+1);
        scanf("%d",&vet[i]);
        if(vet[i]>0){
            vet2[i] = vet[i];
        } else if(vet[i]<0){
            vet3[i] = vet[i];
        }

    }
    system("cls");
    printf("Vetor positivo: ");
    for(i=0;i<8;i++)
        printf("%d, ",vet2[i]);

    printf("\nVetor negativo: ");
    for(i=0;i<8;i++)
        printf("%d, ",vet3[i]);
}

