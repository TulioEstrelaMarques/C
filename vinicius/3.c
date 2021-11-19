#include <stdio.h>
#include <stdlib.h>
int main(){
    int cod,i;
    float vet[5];
    for(i=0;i<5;i++){
        printf("Digite o %d numero real: ",i+1);
        scanf("%f",&vet[i]);
    }
    printf("\nDigite o codigo [0/1/2]: ");
    scanf("%d",&cod);
    if(cod==1){
        printf("o vetor na ordem direta: \n");
        for(i=0;i<5;i++){
            printf("%.2f ",vet[i]);
        }
    }else if(cod==2){
        printf("o vetor na ordem inversa: \n");
        for(i=4;i>=0;i--){
            printf("%.2f ",vet[i]);
        }
    } else{
        printf("finalizando...");
        exit(0);
    }
    return 0;
}
