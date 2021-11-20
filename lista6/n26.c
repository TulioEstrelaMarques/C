//nao tem gasolina, mas blz...
#include <stdio.h>
main(){
    float km,l;
    printf("Quantos KM o carro percorreu? ");
    scanf("%f",&km);
    printf("Quantos litros gastou? ");
    scanf("%f",&l);
    printf("O consumo medio eh: %.2f",km/l);
}
