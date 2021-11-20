#include <stdio.h>
main(){
    int n;
    printf("Quantos numeros vc quer? ");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        if(i%2==1){
            printf("%d,",i);
        }
    }
}
