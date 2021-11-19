#include <stdio.h>
#include <stdlib.h>

int potencia(int b, int e){
    if(e==1){
        return b;
    }
    return b*potencia(b,e-1);
}
int main(){
    int b,e;
    printf("Digite a base e o expoente\n");
    scanf("%d %d",&b,&e);
    printf("resultado: %d",potencia(b,e));
    return 0;
}
