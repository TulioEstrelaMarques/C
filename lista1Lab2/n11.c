#include <stdio.h>

int main(){
    int vet[30];
    for(int i = 0; i < 30; i++){
        vet[i]=i+1;
        if(vet[i]%7!=0)||(vet[i]%10==7)){
            printf("%d ",vet[i]);
        }
    }
}
