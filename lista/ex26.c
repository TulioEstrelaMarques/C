#include <stdio.h>
#define MAX_RANGE 31

void println(long* v, int size){
  register int i;

  for (i = 0; i < size; ++i)
    printf("%ld ", *(v + i));

  putchar('\n');
}

int main(){
  long int coef[MAX_RANGE];
  register int i, j;
  int altura;

  puts("Digite altura do triangulo");
  scanf("%d", &altura);

  coef[0] = 1;
  for (i = 0; i < altura; ++i){
    coef[i + 1] = 0;
    println( coef, i + 1 );

    for (j = i + 1; j > 0; --j)
      coef[j] += coef[j-1];
  }

  return 0;
}
