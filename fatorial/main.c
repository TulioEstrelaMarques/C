#include <stdio.h>
#include <stdlib.h>
int fat(int f);
int main(){

    printf("O fatorial eh: %d",fat(6));
    return 0;
}
int fat(int f){
    int r=1;
    while(f>0){
        r*=f--;
        //f--;
    }
    return r;
}
