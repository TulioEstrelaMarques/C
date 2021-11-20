#include <stdio.h>
main(){
    int n1,n2,n3;
    printf("Insira 3 numeros e veja qual eh o maior: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("o maior valor eh: ");
    if(n1>n2 && n1>n3){
       printf("%d",n1);
    } else if(n2>n1 && n2>n3){
            printf("%d",n2);
    }else{
        printf("%d",n3);
    }
}
