#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[8];
    int x,y,i;
    printf("Preencha o vetor: ");
    for(i=0;i<8;i++)
        scanf("%d",&v[i]);
    for(i=0;i<8;i++)
        printf("%d ",v[i]);
    printf("\nOs valores para x e y respectivamente: ");
    scanf("%d %d",&x,&y);
    Procurar(&x,&y,v[8]);
}

void Procurar(int *x, int *y, int v[8]){
   for(int i=0; i<8;i++){
       if(v[i] == *x){
            printf("X: %d encontra na posicao %d",*x,i);
        } if(v[i]== *y){
            printf("Y: %d encontra na posicao %d",*y,i);
        }else{
            printf("os valores nao foram encontrados");
        }
        int s = *x+*y;
        printf("a soma entre x e y eh: %d",*x+*y);

   }
}
