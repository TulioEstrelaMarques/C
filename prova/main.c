#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct{
    int codigo;
    char nome[20];
    int quantidade;
    float valor;
} produto;
void cadastro(produto *p);
void exibir(produto *p);
int main(){
    produto p;
    int op;
    do{
        printf("----MECARDINHO DO SEU ZE-----\n");
        printf("1- Cadastro\n");
        printf("2- Exibir\n");
        printf("3- Venda\n");
        printf("0- Sair\n");
        printf("Escolha sua opcao: ");
        scanf("%d",&op);
        if(op==1){
        cadastro(&p);
    }else if(op==2){
        exibir(&p);
        }

    }while(op!=0);

    return 0;
}
void cadastro(produto *p){
    for(int i = 0; i < MAX; i++){
        printf("------Cadastro-do-Produto-------\n");
        printf("Codigo: ");
        scanf("%d",&p->codigo);
        printf("Nome: ");
        scanf("%s",&p->nome);
        printf("Quantidade: ");
        scanf("%d",&p->quantidade);
        printf("Valor: ");
        scanf("%f",&p->valor);
        }
}
void exibir(produto *p){
    for(int i = 0; i < MAX; i++){
        printf("-----Listagem-----\n");
        printf("\nCodigo: %d,\nNome: %s,",p->codigo,p->nome);
        printf("\nQuantidade: %d \nValor: %.2f\n",p->quantidade,p->valor);
    }
}
// faltou a venda...
