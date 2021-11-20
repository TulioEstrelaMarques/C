#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int a[TAM];
int b[TAM];
int i;
int c[TAM];
int cont=0;

void cadastra(){
    printf("Digite o vetor A: ");
    for(i=0;i<TAM;i++)
        scanf("%d",&a[i]);
    printf("\n");
    printf("Digite o vetor B: ");
    for(i=0;i<TAM;i++)
        scanf("%d",&b[i]);
}

int repetido(int *a, int *b){
    for(i=0;i<TAM;i++){
        if(*a==*b){
            *c=*a;
            cont++;
        }
    (*c)++;
    }
}

void imprime(int *a,int *b,int *c){
    for(i=0;i<TAM;i++){
        printf("Vetor A: %d",*a);
        a++;
    }
    for(i=0;i<TAM;i++){
        printf("\nVetor B: %d",*b);
        b++;
    }
        for(i=0;i<TAM;i++){
        printf("\nVetor C: %d",*c);
        c++;
    }
}

int main(){
cadastra();
repetido(a,b);
imprime(a,b,c);
}
