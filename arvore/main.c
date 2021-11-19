#include <stdio.h>
#include <stdlib.h>

 typedef struct no{
    int num1;
    int num2;
    char op;
    no *dir;
    no *esq;
} no;

void criarArvore(no *arv, char op, int num1, int num2){
    if(!(arv.num1 && arv.num2)|| arv.op=='')
        return -1;
    else{
        arv.op=op;
        arv.esq=num1;
        arv.dir=num2;
    }
    operacoes(*arv.op,*arv.esq,*arv.dir);
}

int operacoes(char op, int num1, int num2){
    if(op=='+'){
       return num1 + num2;
    }
    else if(op=='-'){
       return num1 - num2;
    }
    else if(op=='*'){
       return num1 * num2;
    }
    else if(op=='/'){
       return num1 / num2;
    }
    else{
        printf("Operacao invalida...");
    }
}

int main(){
    printf("entre com dois numeros e a operacao desejada!");
    scanf("%d",no.num1);
    scanf("%d",no.num2);
    scanf("%c",no.op);
    return 0;
}
