
#include <stdio.h>
main(){
    int hpa,hn,he;
    float sal,imp;
    printf("Funcionario quantas horas vc trabalha? ");
    scanf("%d",&hn);
    printf("Fez hora extra? se sim quantas? ");
    scanf("%d",&he);
    hpa= 365*24;
    he*=hpa;
    hn*=hpa;
    sal= hn+he;
    //printf("Entao seu salario final eh R$%.2f",soma);
    printf("Salario: R$%.2f",sal);
    if(sal<=12000){
        imp=sal-(sal*0.1);
    }else{
        imp=(sal-(sal*0.1))-(sal*0.25);// nao sei q ta certo
    }

    printf("\nImposto R$%.2f",imp);
}
