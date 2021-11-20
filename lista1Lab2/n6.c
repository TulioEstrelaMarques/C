#include <stdio.h>

int main(){
    float v[5];
    int cod,i;
    printf("Preencha o vetor: ");
    for(i=0;i<5;i++)
        scanf("%f",&v[i]);
    printf("\nEscolha o codigo (0,1,2)... \nE veja o q acontece: ");
    scanf("%d",&cod);
    switch(cod){
        case 1:
            printf("Vetor forma direta!\n");
            for(i=0;i<5;i++){
                printf("%.1f ",v[i]);
            }
            printf("\n");
        break;
        case 2:
            printf("Vetor forma iversa!\n");
                    for(i=5;i>0;i--){
                        printf("%.1f ",v[i]);
                    }
                    printf("\n");
        break;
        case 0:
            printf("Ate la vista... Baby");
            printf("\n");
        break;

        default:
            printf("CODIGO ERRADO MEU FILHO!!!");
            printf("\n");
        break;
    }

}
