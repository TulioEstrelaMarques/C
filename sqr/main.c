#include <stdio.h>
#include <stdlib.h>

void sqr(int *x){

    printf("parametro end: %d\n",x);
    printf("parametro conteudo: %d\n",*x);
    *x*=*x;
    printf("calculado end: %d\n",x);
    printf("calculado conteudo: %d\n",*x);
}

int main(){
    int x;
    printf("lido: ");
    scanf("%d",&x);
    printf("main antes de sqr: %d\n",x);
    sqr(&x);
    printf("main resultado: %d\n",x);
    printf("main end: %d\n",&x);
    //printf("main cooteudo: %d\n",*x);
    //printf("Hello world!\n");
    return 0;
}
