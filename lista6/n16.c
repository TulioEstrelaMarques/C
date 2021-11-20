//deu ruim
#include <stdio.h>
main(){
    int n,c,mai;
    for(int i=1;i<=10;i++){
        printf("Digite o %do valor: ",i);
        scanf("%d",&n);
        if(i==1){
            mai=n;
        } else if(n>mai){
            mai=n;
            c++;
        }
    }
    printf("O maior numero foi: %d\n",mai);
    printf("Lido %d vezes",c);
}
