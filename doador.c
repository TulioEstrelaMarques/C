#include <stdio.h>
main(){
    char nome[20],tipo[3];
    int mes;
    float peso;
    for(int i = 1; i <=5; i++){
        printf("Escreva o nome do %do doador: ",i);
        scanf("%s",&nome);
        printf("Qual o tipo sanguineo do doador? ");
        scanf("%s",&tipo);
        printf("O peso do doador: ");
        scanf("%f",&peso);
        printf("Quantos meses desde a ultima doacao? ");
        scanf("%d",&mes);
        printf("-----------------------------\n");
        if(peso >= 50 && mes>=6){
            printf("o doador %s pode doar e tem eh do tipo %s\n",nome,tipo);
            printf("-----------------------------\n");
        }else{
            printf("o doador %s nao pode doar\n",nome);
            printf("-----------------------------\n");
        }
    }
}
