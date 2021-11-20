#include <stdio.h>
main(){
    float c,f;
    printf("Insira a temperatura em oC: ");
    scanf("%f",&c);
    f=(9*c+160)/5;
    printf("%.1foC equivale a %.1foF",c,f);
}
