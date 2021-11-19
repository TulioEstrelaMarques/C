#include <stdio.h>

int main() {

  int A[50], i;

  for(i=0; i<=49; i++){
    printf("Vetor [%d]: %d\n", i, (i+5*i)%(i+1));
  }

  return 0;
