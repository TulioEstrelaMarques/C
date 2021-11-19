#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int cod;
    char nome;
    int qntdd;
    float valorC;
    float valorV;

} produto;

void abrir_arquivo(FILE *f/*,char tipo*/){
    f= fopen("Produtos.txt","w");
}//nao funcionou do jeito  que eu queria

void verifica_abertura(FILE *f){
    abrir_arquivo(f);
    if(f == NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    } else{
        printf("Arquivo aberto com sucesso...");
    }
}

FILE cadastra_produto(FILE *f, produto **dados){
    int i,j,l;
    verifica_abertura(f);
    printf("Quanto produtos voce quer cadastrar: ");
    scanf("%d",&l);
    dados = (produto**)malloc(l*sizeof(produto*));
    for(i=0;i<l;i++){
        dados[i]=(produto*)malloc(4*sizeof(produto));
        for(j=0;j<4;j++){
            dados[i][j].cod = rand()%100;
            printf("Nome: ");
            scanf("%s",&dados[i][j].nome);
            printf("Quantidade: ");
            scanf("%i",&dados[i][j].qntdd);
            printf("Valor da Compra: ");
            scanf("%f",&dados[i][j].valorC);
            printf("Valor da Venda: ");
            scanf("%f",&dados[i][j].valorV);

            fprintf(f,"\nCodigo: %d",dados[i][j].cod);
            fprintf(f,"\nNome: %s",dados[i][j].nome);
            fprintf(f,"\nQuantidade: %d",dados[i][j].qntdd);
            fprintf(f,"\nValor da Compra: %.2f",dados[i][j].valorC);
            fprintf(f,"\nValor da Venda: %.2f",dados[i][j].valorV);
        }
    }

}





int main(){

}
