#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,media;
    printf("Digite duas notas: ");
    scanf("%f %f",&nota1, &nota2);
    printf("As notas sao: %.2f e %.2f",nota1,nota2);
    media = (nota1+nota2)/2;
    printf("\nA media eh %.2f",media);
    printf("\n");
    system("pause");
    return 0;
}
