#include <stdio.h>
#define n 10

void exibir(int v[]){
    int i,s,qtI;
    for(i=0;i<n;i++){
        if(v[i]%2==0){
            s+=v[i];
        }else{
            qtI++;
            printf("%d ",v[i]);
        }
    }
    printf("\nA soma dos pares: %d",s);
    printf("\nA quantidade de impares eh: %d",qtI);
}

int main(){
    int vet[n],i;
    for(i=0;i<n;i++){
        vet[i]=rand()%50+1;
        printf("%d ",vet[i]);
    }
    printf("\n");
    exibir(vet);

}
