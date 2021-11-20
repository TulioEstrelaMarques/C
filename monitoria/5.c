#include <stdio.h>
main(){
    float t;
    printf("Qual a temperatura ai? em C: ");
    scanf("%f",&t);
    if(t<20){
        printf("ESTA FRIO HEIN....");
    } else if(t<=30){
        printf("O CLIMA ESTA AGRADAVEL...");
    } else{
        printf("PUTZ QUE CALOR EH ESSE???");
    }
}
