#include <stdio.h>
main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
        printf("%d, %d",n1,n2);
    }
    else{
        printf("%d,%d",n2,n1);
    }
}
