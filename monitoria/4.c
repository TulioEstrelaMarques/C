#include <stdio.h>
#include <math.h>
main(){
    int n,x;
    double r;
    printf("base e expoente: ");
    scanf("%d %d",&x,&n);
    r = pow(x,n);
    printf("%.0f",r);
}
