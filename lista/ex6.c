#include <stdio.h>
#define N 10
int main() {
    float vetor[N], ax;
    int cod, i, j;
    for (i=0; i<N; i++) {
        printf("Informe vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("Opções:\n\t1 - Ordem direta\n\t2 - Ordem inversa\n\t0 - Fim\nOpção? ");
    scanf("%d", &cod);
    while ((cod < 0) || (cod > 2)) {
        printf("Opção inválida\nOpção? ");
        scanf("%d", &cod);
    }
    switch (cod) {
        case 1:
            printf("1 - Ordem direta\n");
            for (i=0; i<N; i++)
                printf("\t[%d]: %f", i, vetor[i]);
        break;
        case 2:
            printf("2 - Ordem inversa\n");
            for (i=N-1; i>=0; i++)
                printf("\t[%d]: %f", i, vetor[i]);
        break;
        case 0:
            printf("Fim\n");
        }
    return 0;
}
