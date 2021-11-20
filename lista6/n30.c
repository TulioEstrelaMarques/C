#include <stdio.h>
main(){
    int a,b,c;
    printf("Insira 3 segmentos para formar um triangulo: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a < b + c && b < a + c && c < a + b){
        printf("Esses segmentos formam um triangulo: ");
        if(a == b && b == c){
            printf("EQUILATERO");
        } else if(a != b && b != c && c != a){
                printf("ESCALENO");
        }else{
            printf("ISOSCELES");
        }
    }else{
        printf("Esses segmentos nao formam um triangulo.");
    }
}
