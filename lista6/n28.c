#include <stdio.h>
main(){
    int a, b, aux;
    printf("Digite 2 valores: ");
    scanf("%d %d",&a,&b);
    printf("Antes da troca: A: %d e B: %d\n",a,b);
    aux = a;
    a = b;
    b = aux;
    printf("Depois da troca: A-> %d e B-> %d",a,b);
}
