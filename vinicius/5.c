#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, pos1=0, pos2=0;
   char vend [10][100]; //vendedores
   float total, perc[10], v[10], maior=0.0, menor=99999.9;

   for(i=0;i<10;i++){
      printf("Digite o nome do %d%c vendedor: ", i+1 , 248);
      scanf("%s",vend[i]);
      printf("Digite do %d%c total das vendas: R$ ", i+1, 248);
      scanf("%f",&v[i]);
      printf("Digite do %d%c percentual de comissao: ", i+1, 248);
      scanf("%f",&perc[i]);
      printf("\n");
   }

   for(i=0;i<10;i++){
      if(v[i]>maior){
      maior=v[i]*((perc[i]/100)+1);
      pos1=i;
      }
   }

   for(i=0;i<10;i++){
      if(v[i]<menor){
      menor=v[i]*((perc[i]/100)+1);
      pos2=i;
      }
   }

   for(i=0;i<10;i++){
      printf("Vendedor: %s ",vend[i]);
      if(v[i]>0){
          total= v[i]*((perc[i]/100)+1);
          printf("\t\tValor a receber: R$ %.2f .",total);
      }

      printf("\n");
   }

    for(i=0;i<10;i++){
      if(pos1==i){
      printf("\nO maior valor a receber %c: R$ %.2f quem o receber%c %c o %s .", 130, maior, 160, 130, vend[i]);
      }
   }

   for(i=0;i<10;i++){
      if(pos2==i){
      printf("\nO menor valor a receber %c: R$ %.2f quem o receber%c %c o %s .", 130, total, 160, 130, vend[i]);
      }
   }

   return 0;
}
