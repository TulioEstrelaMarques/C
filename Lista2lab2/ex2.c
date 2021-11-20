#include <stdio.h>

int fibR(int n){
    if(n<2)
        return n;
    else
        return fibR(n-1)+fibR(n-2);
}

int main(){
    int n,i;
    printf("Escolha o n-esmo termo: ");
    scanf("%d",&n);
    printf("Sequencia de Fibonacci:\n");
    for(i=0;i<n;i++)
        printf("%d ",fibR(i+1));

}
