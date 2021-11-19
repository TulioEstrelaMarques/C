#include <stdio.h>

int main(){
    int m[3][4],i,j,qtddPares=0,somaImpares=0,s=0;
    float media;
    printf("Matriz 3x4 \n-------------\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&m[i][j]);
            if(m[i][j]%2==0){
                qtddPares++;
            }else{
                somaImpares=somaImpares+m[i][j];
            }
            s=s+m[i][j];
        }
    }
    media=s/12;
    printf("Quantidade de pares eh: %d",qtddPares);
    printf("Soma dos impares: %d",somaImpares);
    printf("Media dos elementos %d",media);
}
