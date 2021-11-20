#include <stdio.h>
#include <stdlib.h>

int fatR(int n){
    int r;
    if(n==1){
        return(1);
    }
    r=fatR(n-1)*n;
    return (r);

}

int main(){
    int r,n;
    printf("Digite um numero para ver seu fatoral: ");
    scanf("%d",&n);
    r= fatR(n);
    printf("Resultado: %d",r);
    return 0;
}
