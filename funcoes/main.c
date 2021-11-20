#include <stdio.h>
#include <stdlib.h>
int fat(int n);
int main(){
    int n;
    printf("Digite um valor para ver o fatorial!: ");
    scanf("%d",&n);
    fat(n);
    return 0;
}
int fat(int n){
    int f=1;
    for(int i=n; i>=1; i--){
        f*=i;//f = f * i;
    }
    printf("O Fatorial de %d eh %d",n,f);
}
