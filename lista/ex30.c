#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float produto_diagonal_secundaria( float **, int );

int main(){
    int i = 0;
    int j = 0;
    float **mat;
    int n = 0;

    printf("\nDigite o tamanho da matriz: ");
    scanf("%d", &n);

    mat = malloc(sizeof(float *) * n);

    for(i = 0; i < n; i++)
        mat[i] = malloc(sizeof(float) * n);

    printf( "\n\nO produto dos elementos da diagonal principal da matriz é: %f ", produto_diagonal_secundaria(mat, n) );


    for(i = 0; i < n; i++)
        free(mat[i]);

    free(mat);

    return 0;
}


float produto_diagonal_secundaria(float **mat, int n){

    float produto_diagonal_secundaria = 1;
    int i, j;


    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite os valores da matriz: ");
            scanf("%f", &mat[i][j]);
        }
    }


  int s = 0, p = n-1;
  for(; s<n; s++, p--)
  produto_diagonal_secundaria *= mat[s][p];


    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%0.f ", mat[i][j]);
        }
        printf("\n");
    }

    printf("O valor da multiplicacao da diagonal secundaria é %0.f", produto_diagonal_secundaria);

    getche();
}
