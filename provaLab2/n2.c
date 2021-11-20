#include <stdio.h>
#define TAM 3

int i;
typedef struct cliente{
    char nome[20];
    char sexo;
    int idade;
} cliente;
cliente c[TAM];
void cadastro(){
    printf("Dados do cliente:");
    for(i=0;i<TAM;i++){
        printf("\n%do cliente",i+1);
        printf("\nNome: ");
        scanf("%s",&c[i].nome);
        printf("\nSexo[M/F]: ");
        scanf("%c",&c[i].sexo);
        printf("\nIdade: ");
        scanf("%d",&c[i].idade);
    }
}
void exibirIdade(cliente *c){
    int qtddC,qtddA,qtddJ;
    for(i=0;i<TAM;i++){
        if((c[i].idade)<15){
            qtddC++;
            exibirDados(c);
        } else if(c[i].idade>60){
            qtddA++;
            exibirDados(c);
        }else{
            qtddJ++;
            exibirDados(c);
        }
        c++;
    }
    printf("A quantidade de Jovem: %d",qtddJ);
    printf("A quantidade de Adulto: %d",qtddA);
    printf("A quantidade de Crianca: %d",qtddC);
}
void exibirSexo(cliente *c){
    for(i=0;i<TAM;i++){
        if(c[i].sexo == 'M'){
            exibirDados(c);
        }else{
            exibirDados(c);
        }
    }
    c++;
}

void exibirDados(cliente *c){
    for(i=0;i<TAM;i++){
        printf("Nome: %s\n",c[i].nome);
        printf("Idade: %d\n",c[i].idade);
        printf("Sexo: %c\n",c[i].sexo);
        c++;
    }
}
int main(){
    cadastro();
    exibirIdade(c);
    exibirSexo(c);
}
