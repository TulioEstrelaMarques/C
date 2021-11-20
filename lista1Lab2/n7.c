#include <stdio.h>

int main(){
    int i,v[50];
    for(i=0;i<50;i++){
        v[i]=(i+5*i)%(1+i);
        printf("%d\n",v[i]);
    }
}
