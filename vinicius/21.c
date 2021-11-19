#include <stdio.h>

int main(){
      int maior, num=1;
      printf("Digite um numero ou digite 0 para sair...: ");
      scanf("%d",&num);
      maior=num;

      while(num!=0){
           printf("Digite um numero ou digite 0 para sair...: ");
           scanf("%d",&num);
           if(num>maior){
                maior=num;
           }
      }

      printf("O maior numero e...: %d",maior);

      return 0;
}
