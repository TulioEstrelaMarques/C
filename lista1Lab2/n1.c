#include <stdio.h>
#include <stdlib.h>
void Quadrado(int v[10]){
    for(int i = 0; i<10;i++){
        printf("%d ",v[i]*v[i]);
    }
}

int main(){
    int v[10]; //= {0,1,2,3,4,5,6,7,8,9};
    /*for(int i = 0; i<10;i++){
        printf("%d ",v[i]*v[i]);
    }*/
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++){
        printf("%do: ",i+1);
        scanf("%d",&v[i]);
    }
    printf("o vetor eh: ");
    for(int i=0;i<10;i++){
        printf("%d ",v[i]);
    }
    for(int i = 0; i < 10; i++){
        Quadrado(v[10]);
    }


}
