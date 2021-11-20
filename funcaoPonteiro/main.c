#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verifica(char *p, char c){
    for(int i=0; strlen(*p)-1; i++){
        if(*p==c){
            printf("A letra esta na posiçao %d",&c);
        }
    }
}

int main(){
   char c, vet[10];
   printf("Digite um nome: ");
   scanf("%s",vet);
   printf("Que letra vc procura? ");
   scanf("%c",&c);
   verifica(vet,c);
}
