#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10,*p;
    float y=2.5,*q;
    p=&x;
    q=&y;

    printf("x = %d e y = %.1f\n",x,y);
    printf("end x = %p e end y = %p\n",&x,&y);
    printf("*p = %d e *q = %.1f\n",*p,*q);
    printf("p = %p e q = %p\n",p,q);
    printf("end p = %p e end q = %p\n",&p,&q);
/* Só o endereço de p e q são diferente.
Pois são variaveis diferentes.
o resto é a mesma coisa, porque um é ponteiro do outro.*/
}
