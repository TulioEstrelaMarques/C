#include <stdio.h>
#include <stdlib.h>
main(){
    float n1,n2,m;
    printf("Digite as 2 notas... ");
    scanf("%f %f",&n1,&n2);
    m=(n1+n2)/2;
    printf("\n");
    if(m<5){
        printf("REPROVADO...");
    }else if(m<6){
        printf("RECUPERAÇAO...");
    } else{
        printf("APROVADO...");
    }
    printf("\n");
    system("pause");
}
