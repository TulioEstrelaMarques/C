#include <stdio.h>
#include <stdlib.h>

main(){
    int n, f=1;
    printf("Fatorial de que numero (nao vale negativo): ");
    scanf("%d",&n);
    for(int i=n; i >= 1; i--){
        f*=i; /*f=f*i*/
        //printf("%d!=")
    }

    printf("O fatorial de %d eh: %d",n,f);
}
