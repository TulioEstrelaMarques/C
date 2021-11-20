#include <stdio.h>
main(){
    int num;
    printf("Digite qualquer valor e veja se eh par ou impar... ");
    scanf("%d",&num);
    printf("o numero %d eh: ",num);
    if(num%2 == 0){
        printf("PAR");
    }else{
        printf("IMPAR");
    }
}
