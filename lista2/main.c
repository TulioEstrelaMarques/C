#include <stdlib.h>
#include <stdio.h>

int main(){
    int soma, i, lim;

	printf("Digite o limite: ");
	scanf("%d%*c", &lim);

	soma = 0;
	for (i=0; i<=lim; i+=2)
		soma += i;

	printf("A soma de todos os nu'meros pares ate' %d e': %d\n", lim, soma);

	return 0;
}
