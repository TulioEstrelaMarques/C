#include <stdio.h>
int potenciaR(int b, int e){
    if(e==0){
        return 1;
    }
    return potenciaR(b,e-1)*b;
}

int main(){
 int b,e;
 scanf("%d %d",&b,&e);
 printf("%d^%d = %d",b,e,potenciaR(b,e));

}
