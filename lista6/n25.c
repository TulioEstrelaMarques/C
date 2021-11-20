#include <stdio.h>
main(){
    int op;
    float r,d;
    printf("1-> Real para Dolar\n2-> Dolar para Real");
    printf("\nQual a opcao: ");
    scanf("%d",&op);
    if(op==1){
        printf("Qual o valor? R$");
        scanf("%f",&r);
        d=r/3.67;
        printf("R$%.2f vale US$%.2f",r,d);
    }else{
        printf("Qual o valor? US$");
        scanf("%f",&d);
        r=d*3.67;
        printf("US$%.2f vale R$%.2f",d,r);
    }
}
