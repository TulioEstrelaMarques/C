#include <stdio.h>
int main() {
    int matriz[4][7], menor, minmax, i, j, k, l;
    for (i=0; i<4; i++)
        for (j=0; j<7; j++)
            scanf("%d",&matriz[i][j]);
            menor = matriz[0][0];
    for (i=0; i<4; i++)
        for (j=0; j<7; j++)
            if (menor > matriz[i][j]) {
                menor = matriz[i][j],
                k = i;
            }
    minmax = matriz[k][0];
    l = 0;
    for (j=1; j<7; j++)
        if (minmax < matriz[k][j]) {
                minmax = matriz[k][j];
                    l = j;
        }
    printf("\nMINMAX = %d na posição [%d][%d]\n", minmax, k, l);
    return 0;
}
