#include <stdio.h>

int main(){
   typedef struct sistema {
        int num_Voo, qtd_Lugar;
    } sistema;

   typedef struct reserva{
        sistema voo;
        int iden_cliente,lugar;

    } reserva;

    reserva cli[5];

    printf("Por favor preencha os dados abaixo: \n");
    for(int i=0;i<=5;i++){
        cli[i].voo.qtd_Lugar=30;
        printf("Identidade: ");
        scanf("%d",&cli[i].iden_cliente);
        printf("Voo: ");
        scanf("%d",&cli[i].voo.num_Voo);
        printf("Seu lugar: ");
        if(cli[i].lugar<=cli[i].voo.qtd_Lugar)
            scanf("%d",&cli[i].lugar);
        cli[i].voo.qtd_Lugar--;
        printf("Sobaram %d lugares",cli[i].voo.qtd_Lugar);
        system("cls");

    }
    for(int i=0;i<=5;i++){
        printf("---------------------------");
        printf("Identidade: %d\nSeu voo: %d",cli[i].iden_cliente,cli[i].voo.num_Voo);
        printf("\nSeu lugar: ",cli[i].lugar);
        if(cli[i].iden_cliente==9999){
            printf("Parabens vc consegui o impossivel");
        }
    }


}
