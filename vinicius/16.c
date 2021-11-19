#include <stdio.h>
int main(){
    int matriz[10][20], vetor[10], i, j;
    for (i=0; i<10; i++)
        for (j=0; j<20; j++)
            scanf("%d", &matriz[i][j]);
    for (i=0; i<10; i++){
        vetor[i] = 0;
        for (j=0; j<20; j++)
            vetor[i] += matriz[i][j];
    }
    for (i=0; i<10; i++)
        for (j=0; j<20; j++)
            matriz[i][j] *= vetor[i];
    for (i=0; i<10; i++){
        printf("\n");
        for (j=0; j<20; j++)
            printf("%d\t", matriz[i][j]);
    }
    return 0;
}
