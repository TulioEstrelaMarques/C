#include <stdio.h>
#include <stdlib.h>

main(){
    int n1,n2;
    printf("Insira 2 numeros... \n");
    scanf("%d %d",&n1,&n2);
    printf("O resultado da soma: %d",n1+n2);
    printf("\nO resultado da subtracao: %d",n1-n2);
    printf("\nO resultado da multiplicacao: %d",n1*n2);
    printf("\nO resultado da divisao: %d \n",n1/n2);
    system("pause");
}
