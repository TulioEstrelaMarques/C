#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_CARROS 20

typedef struct
{   char marca[15];
    char cor[10];
    int ano;
    float preco;

}CARROS;

CARROS vet_carros[QTD_CARROS];

void ler_carros(CARROS *vet_carros){
    printf("Digite a Marca :"); gets(vet_carros->marca);
    printf("Digite a cor   :"); gets(vet_carros->cor);
    printf("Digite o ano   :"); scanf("%d", &vet_carros->ano);
    printf("Digite o preco :"); scanf("%f", &vet_carros->preco);
}
void mostrar_carros(CARROS *vet_carros){
    printf("Marca : %s\n", vet_carros->marca);
    printf("cor   : %s\n", vet_carros->cor);
    printf("ano   : %d\n", vet_carros->ano);
    printf("preco : %.3f\n", vet_carros->preco);
}

void pesquisa_preco(float preco, CARROS *vet_carros){
    if(preco <= vet_carros->preco)
        mostrar_carros(vet_carros);
}
void pesquisa_marca(CARROS *vet_carros){
    char pesquisa_marca[20];
    printf("Digite uma marca: ");
    gets(pesquisa_marca);
    if(strcmpi(pesquisa_marca, vet_carros->marca))
        mostrar_carros(vet_carros);
}

int main(){
   ler_carros(vet_carros);
   puts("\n");
   //pesquisa_preco(19.000, vet_carros);
   pesquisa_marca(vet_carros);
   return 0;
}
