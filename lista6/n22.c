#include <stdio.h>
main(){
    char nome[10],resp;
    int ano_nasc,ano_atual,idade;
    printf("Qual eh seu nome? ");
    scanf("%s",&nome);
    printf("Que ano vc nasceu(aaaa)? ");
    scanf("%d",&ano_nasc);
    printf("Ano atual(aaaa): ");
    scanf("%d",&ano_atual);
    printf("Ja fez aniversario esse ano? [S/N]");
    scanf("%c",&resp);
    idade = ano_atual-ano_nasc;
    if(resp == 's'){
        printf("\nVc completou %d anos.",idade);
    }else if(resp == 'n'){
        printf("\nVc ira completar %d anos.",idade);
    }
}
