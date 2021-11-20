#include <stdio.h>
#include <stdlib.h>

int main(){
 int *p;
 p=malloc(100*sizeof(int));
 p[0]=999;
 free(p+1);

}
