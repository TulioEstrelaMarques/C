#include <stdio.h>
main(){
    int hpa,hn,he;
    printf("Funcionario quantas horas vc trabalha? ");
    scanf("%d",&hn);
    printf("Fez hora extra? se sim quantas? ");
    scanf("%d",&he);
    hpa= 365*24; //horas por ano
    he*=hpa;
    hn*=hpa;
    printf("Entao seu salario final eh R$%d",hn+he);
}
