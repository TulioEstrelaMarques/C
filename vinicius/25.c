#include <stdio.h>
#include <stdlib.h>

float ma(float nota1,float nota2,float nota3){
    float media_aritmetica =((nota1+nota2+nota3)/3);
    return media_aritmetica;
}

float mp(float nota_1,float nota_2,float nota_3){
    float media_ponderada =((nota_1*5+nota_2*3+nota_3*2)/10);
    return media_ponderada;

}

int main(){
    float x,y,z,M_A,M_P;
    char escolha;
    printf("Digite as 3 notas do aluno:\n");
    scanf("%f%f%f",&x,&y,&z);
    printf("Digite : \n A - media aritmetica \n P - media ponderada:\n");
    scanf("%c",&escolha);
    if(escolha=='a'||escolha=='A'){
        M_A=ma(x,y,z);
        printf("media e: %.2f",M_A);

    }

    if(escolha=='p'||escolha=='P'){
        M_P=mp(x,y,z);
        printf("media e: %.2f",M_P);

    }

    return 0;

}


