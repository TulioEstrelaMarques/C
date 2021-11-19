#include <stdio.h>
int main(){
    int mat1[3][3], mat2[3][3], result[3][3], i, j;
    printf("Digite os elementos da primeira matriz, linha por linha.");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &mat1[j]);
    printf("Digite os elementos da segunda matriz, linha por linha.");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &mat2[j]);
    printf("\nO resultado da multiplicacao das matrizes e:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result[j]=(mat1[0]*mat2[0][j])+(mat1[1]*mat2[1][j])+(mat1[2]*mat2[2][j]);
            printf("%d ", result[j]);
        }
        printf("\n");
    }
    return 0;
}
