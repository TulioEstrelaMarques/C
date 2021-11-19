#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    char valor[20];
    struct No *proximo;
} TipoNo;
typedef TipoNo *TipoPonteiro;
TipoPonteiro p[];

int main(){
    //char valor[20];
    int i=0;
    char resp;
    do{
        printf("Digite uma palavra: ");
        p[i] = (TipoPonteiro*)malloc(sizeof(TipoNo));
        scanf("%s",p[i]->valor);
        i++;
        printf("Quer continuar? [S/N]");
        scanf("%c",&resp);
    }
    while(resp!='N');
    while(p[i]->proximo!=""){
        printf("%s",p[i]->valor);
    }
    return 0;
}
