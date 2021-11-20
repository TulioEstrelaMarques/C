#include <stdio.h>
main(){
    int comp,larg,alt,vol;
    printf("Solicite o comprimento(m) do objeto: ");
    scanf("%d",&comp);
    printf("Agora a largura(m): ");
    scanf("%d",&larg);
    printf("E finalmente a altura(m): ");
    scanf("%d",&alt);
    vol=comp*larg*alt;
    printf("O volume do objeto eh %dm.",vol);
}
