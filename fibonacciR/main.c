#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n==1||n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n,i;
    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d",&n);
    printf("A sequencia de Fibonacci eh:\n");
    for(i=0;i<n;i++)
        printf("%d ",fibonacci(i+1));
    return 0;
}
