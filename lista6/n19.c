#include <stdio.h>
main(){
    float sal,por,aumento,nvsal;
    printf("Qual o salario do funcionario? R$");
    scanf("%f",&sal);
    printf("Porcentagem de aumento: ");
    scanf("%f",&por);
    aumento= sal*por/100;
    nvsal = sal+aumento;
    printf("Com um aumento de R$%.2f o novo salario eh: R$%.2f",aumento,nvsal);
}
