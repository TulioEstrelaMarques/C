#include <stdio.h>
main(){
    int op;
    float saldo, din;
    do{
        printf("------------------\n");
        printf("Caixa Eletronico\n");
        printf("------------------\n");
        printf("1 - Depositar\n2 - Ver Saldo\n3 - Sacar\n4 - Sair");
        printf("\nEscolha a opcao: ");
        scanf("%d",&op);
        if(op==1){
            printf("Quanto deseja depositar? R$");
            scanf("%f",&din);
            saldo+=din;
        }else if(op==2){
            printf("Seu saldo: R$%.2f",saldo);
            printf("\n");
        }else if(op==3){
            if(saldo<=0){
                printf("Voce nao tem saldo suficiente...\n");
            }else{
                printf("Quanto deseja retirar? R$");
                scanf("%f",&din);
                saldo-=din;
            } /*else if(op==4){

            } else{
                printf("Opcao invalida. Tente novamente...");
            }*/
        }

    }while(op!=4);
    printf("Volte sempre...\n");
}
