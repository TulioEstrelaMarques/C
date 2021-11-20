#include <stdio.h>

void PouI(int v[]){
    int contP,contI;
    for(int i=0; i<10; i++){
         if(v[i]%2==0){
            contP++;
         }else{
             contI++;
         }
    }
    printf("Qntdd de Pares: %d",contP);
    printf("Qntdd de Impares: %d",contI);
}

int main(){
    int v[10];
    for(int i=0; i<10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d",&v[i]);
    }
    PouI(v[10]);
}
