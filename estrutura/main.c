#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int i;
struct pessoa{
        char nome[40];
        char rua[40];
        int num;
        unsigned long int cep;
   } pessoas[MAX];
void inserir();
int main(){
    int op;

    do{
        printf("1- inserir");
        printf("2- listar");
        printf("3- excluir");
        putchar("Qual opcao? ");
        scanf("%d",&op);
        switch(op){
        case 1:
            inserir();
       // case 2:
            //listar();
        //case 3:
            //excluir();
        }

    }while(op>=4);
}
void inserir(){
    for(i=0;i<5;i++){
        printf("Nome: ");
        gets(pessoas.nome);
        printf("Rua: ");
        gets(pessoas.rua);
        printf("Numero: ");
        scanf("%d",&pessoas.num);
        printf("CEP: ");
        scanf("%d",&pessoas.cep);
    }

}
