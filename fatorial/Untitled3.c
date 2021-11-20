#include <stdio.h>
main(){
    int n1,n2;
    char op;
    printf("Digite: numero operador numero...\n");
    scanf("%f %c %f",&n1,&op,&n2);
    switch(op){
        case '+':printf("= %f",n1+n2);break;
        case '-':printf("= %f",n1-n2);break;
        case '*':printf("= %f",n1*n2);break;
        case '/':printf("= %f",n1/n2);break;
        default:printf("Operador invalido...");break;
    }
}
