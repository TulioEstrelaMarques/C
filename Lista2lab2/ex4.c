#include <stdio.h>

int somaR(int n){
    if(n==0){
        return 0;
    } else{
        return n+somaR(n-1);
    }
}

int main(){
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);
    printf("O somatorio eh: %d",somaR(n));
}
