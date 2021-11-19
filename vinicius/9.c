#include <stdio.h>

int main(){
    float v[10],s=0;
    int i, qtdd=0;
    printf("Preencha o vetor com numeros positivos e negativos\n");
    for(i=0;i<10;i++)
        scanf("%f",&v[i]);

    for(i=0;i<10;i++){
        if(v[i]<0){
            qtdd++;
        }else{
            s = s + v[i];
        }
    }
    printf("\nQuantidade dos negativos eh %d",qtdd);
    printf("\nSoma dos positivos eh %.2f",s);
}
