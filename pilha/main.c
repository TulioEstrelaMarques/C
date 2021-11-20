#include <stdio.h>
#include <stdlib.h>
#define tam 10
int i;
void push(int vet[], int *ptr);
void imprimir(int vet[],int *ptr);
int main(){
    int vet[tam], *ptr;
    push(vet[tam],ptr);
    imprimir(vet[tam],ptr);
    return 0;
}

void push(int vet[], int *ptr){
    if(ptr==vet){
        printf("O ponteiro esta na posiçao inicial\n");
        for(i=0; i<tam; i++){
            printf("Antes: ptr: %d\t P(vet): %d\n",ptr,&vet[i]);
            printf("Comece a inserir: ");
            scanf("%d",&vet);
            ptr++;
            printf("Depois: ptr: %d\t P(vet): %d\n",ptr,&vet[i]);
        }
        printf("\n\n");
    }
}
void imprimir(int vet[],int *ptr){
    for(i=0;i<tam;i++){
        printf("%d\n",vet[i]);
        ptr++;
    }
}
