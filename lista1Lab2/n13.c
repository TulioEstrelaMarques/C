#include <stdio.h>

void primo(int v[]){
    int div,i;
    for(i=0;i<10;i++){
        if(v[i]%i==0)
            div++;
    }
    for(i=0;i<10;i++)
        if(div==2)
            printf("O primo: %d se encontra na posicao: %d",v[i],i);
}

int main(){
   int vet[10],i;
   for(i=0;i<10;i++){
        vet[i]=rand()%20+1;
        printf("%d ",vet[i]);
   }
   primo(vet);
}
