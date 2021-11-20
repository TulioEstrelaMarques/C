#include <stdio.h>
main(){
    int n,mai;
    for(int i=1; i<=10; i++){
        printf("Insira o %do numero: ",i);
        scanf("%d",&n);
        if(i==1){
            mai=n;
        } else if(n>mai){
            mai=n;
        }
    }
    printf("\nEntre todos o maior valor foi: %d",mai);
}
