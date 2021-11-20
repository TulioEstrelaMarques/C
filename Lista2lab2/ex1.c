#include <stdio.h>

int somaR(int n){
    int r;
    if(n==0){
        return 0;
    }else{
        return n+somaR(n-2);
    }
}

int main(){
    int n;
    do{
        printf("Digite um numero par: ");
        scanf("%d",&n);
        printf("\nEu pedi um nurmero par\n");

    }while(n%2!=0);
    printf("\nA soma eh %d",somaR(n));



}
