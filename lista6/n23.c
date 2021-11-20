#include <stdio.h>
main(){
    float imc,p,al;
    printf("Vamos calcular seu IMC?\n");
    printf("Peso: ");
    scanf("%f",&p);
    printf("Altura: ");
    scanf("%f",&al);
    imc=p/al*2;
    printf("Seu IMC eh %.1f\n",imc);
    printf("Status: ");
    if(imc<18.5){
        printf("Abaixo do peso.");
    }else if(imc<=25){
            printf("Peso normal.");
    }else if(imc<=30){
            printf("Acima do peso.");
    }else{
        printf("Obeso.");
    }
}
