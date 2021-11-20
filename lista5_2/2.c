#include <stdio.h>

int main(){
    int x1=1, x2=2, *px;
    px=&x1;
    x1=5;
    x2=(*px)+10;
    x1=9;
    printf("x1:%d  x2:%d  *px:%d",x1,x2,*px);
    // *px fica como 5 e depois é sobrescrito como 9
}
