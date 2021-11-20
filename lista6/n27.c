//nao tem gasolina, mas blz...
#include <stdio.h>
main(){
    float km,l,r;
    printf("Quantos KM o carro percorreu? ");
    scanf("%f",&km);
    printf("Quantos litros gastou? ");
    scanf("%f",&l);
    printf("O consumo medio eh: %.2f",km/l);
    r=l*8.99; //nao posso fazer mada...
    printf("\nE gastou R$%.2f",r);
}
