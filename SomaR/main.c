#include <stdio.h>
#include <stdlib.h>

int SomaR(int n){
    if(n==1)
        return n;
    else{
        return(n+SomaR(n-1));
        /*s=n+(n-1);
        return SomaR(n-1);*/
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("A soma eh: %d",SomaR(n));
}
