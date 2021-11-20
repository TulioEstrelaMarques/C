#include <stdio.h>
main() {
    float n1,n2,m;
    printf("digite as notas");
    scanf("%f %f",&n1,&n2);
    m=(n1+n2)/2;
    printf("\n");
    if(m<5){
        printf("reprovado");
   } else if(m<6){
        printf("recuperação");
    }else {
        printf("aprovado");
            }
    printf("\n");
    system("pause");
}
