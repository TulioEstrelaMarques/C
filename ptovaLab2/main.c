#include <stdio.h>
#include <stdlib.h>
int A[],B[],a,b;

int main(){
    int i;
    lerVetor(A);
    return 0;
}
void lerVetor(int vetA[]/*, int vetB[]*/){
    int *tam_A= calloc(a,sizeof(int));
    printf("Qual o tamanho do vetor A: ");
    scanf("%d",&a);
    for(int i=0; i<tam_A;i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d",&A[i]);

    }

}
