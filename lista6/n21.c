#include <stdio.h>
main(){
    int op,min,hora;
    printf("1-Minuto para hora...\n2-Hora para minuto...\n");
    printf("escolha uma opcao: ");
    scanf("%d",&op);
    if(op == 1){
        printf("Quantos minutos? ");
        scanf("%d",&min);
        hora=min/60;
        printf("Em %d min ha %d horas...",min,hora);
    } else{
        printf("Quantas horas? ");
        scanf("%d",&hora);
        min=hora*60;
        printf("Em %d horas tem %d minutos...",hora,min);
    }
}
