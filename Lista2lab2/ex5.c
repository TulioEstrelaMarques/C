#include <stdio.h>

int imp(int n){
    return imp(n);
}

int main(){
    int n;
    printf("Qual numero vc quer? ");
    scanf("%d",&n);
    printf("%d",imp(n));
}
