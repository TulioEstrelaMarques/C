#include <stdio.h>
int main() {
    float x[20], y[20], prod_esc=0;
    int n, i;
    printf("Informe o n�mero de elementos de cada um dos vetores: ");
    scanf("%d", &n);
    while ((n < 1) || (n > 20)) {
        printf("Valor inv�lido. Reinforme o n�mero de elementos de cada um dos vetores: ");
        scanf("%d", &n);
    }
    for (i=0; i<n; i++) {
        printf("Informe x[%d]: ", i);
        scanf("%f", &x[i]);
    }
    for (i=0; i<n; i++) {
        printf("Informe y[%d]: ", i);
        scanf("%f", &y[i]);
    }
    for (i=0; i<n; i++)
        prod_esc += x[i] * y[i];
        printf("Produto escalar: %f\n", prod_esc);
    return 0;
}
