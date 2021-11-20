#include <stdio.h>
main(){
    int n1,n2;
    printf("Insira dois valores e veja qual eh o maior: ");
    scanf("%d %d",&n1,&n2);
    printf("O maior valor eh: ");
    if(n1>n2){
        printf("%d",n1);
    }else{
        printf("%d",n2);
    }
}
