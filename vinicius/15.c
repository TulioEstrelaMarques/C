#include <stdio.h>

int main(){
    int i, j, matriz[2][2], aux=0;

    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
        printf("\n\n Informe o valor da %d%c Linha e da %d%c Coluna da Matriz : ", i+1, 167, j+1, 167);
        scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n\n\n");
    printf("------------------------------... Matriz Gerada ---------------------------------\n\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n\n");
    }

    aux = matriz[0][0];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if (matriz[i][j] > aux ){
                aux = matriz[i][j];
            }
        }
    }
    printf(" Maior elemento : %d \n\n", aux);
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            matriz[i][j] = matriz[i][j]*aux ;
        }
    }
    printf("------------------------------... Matriz Gerada ---------------------------------\n\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n\n");
    }


}
