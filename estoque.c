#include <stdio.h>
main(){
    int op,eP1,eP2,eP3;
    char nP1[10],nP2[10],nP3[10];
    float pP1,pP2,pP3;
    do{
        printf("----- Menu -----\n");
        printf("1- Cadastro\n");
        printf("2- Venda\n");
        printf("3- Sair\n");
        printf("----------------\n");
        printf("Qual sua opcao? ");
        scanf("%d",&op);
        printf("-------------------\n");
        if(op==1){
            printf("Nome do produto 1: ");
            scanf("%s",&nP1);
            printf("Estoque do produto 1: ");
            scanf("%d",&eP1);
            printf("Preco do produto 1: ");
            scanf("%f",&pP1);
            printf("Nome do produto 2: ");
            scanf("%s",&nP2);
            printf("Estoque do produto 2: ");
            scanf("%d",&eP2);
            printf("Preco do produto 2: ");
            scanf("%f",&pP2);
            printf("Nome do produto 3: ");
            scanf("%s",&nP3);
            printf("Estoque do produto 3: ");
            scanf("%d",&eP3);
            printf("Preco do produto 3: ");
            scanf("%f",&pP3);
        }

    }while(op!=3);

}
