#include <stdio.h>
#include <stdlib.h>
int fat(int n);
int main(){
    int n;
    printf("Digite um numero para ver seu fatorial ");
    scanf("%d",&n);
    printf("O fatorial de %d eh: %d",n,fat(n));
    return 0;
}
int fat(int n){
    int f=1;
    for(int i=n; i>1; i--){
        f*=i;
    }
    return f;
}
