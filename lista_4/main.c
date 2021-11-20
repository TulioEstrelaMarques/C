#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int temp[TAM],mai,men,soma,qtdma=0,qtdme=0;
    float med;
    for(int i=0; i<TAM; i++){
        temp[i]=15+(rand()%16);
        printf("%d\n",temp[i]);
        if(i==1){
            mai=temp[i];
            men=temp[i];
        }if(temp[i]>mai){
            mai=temp[i];
        }if(temp[i]<men){
            men=temp[i];
        }
        soma+=temp[i];
    }
    med=soma/TAM;
    for(int i=0; i<TAM; i++){
        if(temp[i]>med)
            qtdma++;
        if(temp[i]<med)
            qtdme++;
    }
    printf("A menor temperatura eh: %d\n",men);
    printf("A maior temperatura eh: %d\n",mai);
    printf("Temperatura media: %.1f\n",med);
    printf("Qtd de dias maiores q a media %d\n",qtdma);
    printf("Qtd de dias maiores q a media %d",qtdme);
    return 0;
}
