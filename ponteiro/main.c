#include <stdio.h>
#include <stdlib.h>

void troca(int *x,int *y);
int main(){
    int i,j;
    printf("Digite dois valores: ");
    scanf("%d %d",&i,&j);
    printf("Antes da troca: %d e %d\n\n",i,j);
    troca(&i,&j);
    printf("Depois da troca: %d e %d",i,j);
    return 0;
}

void troca(int *x, int *y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}
