#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	int i,j;
	char matriz[100][10];
	int acertos[100];
	char gab[10];
	char nota;

	printf ("\nCriando o gabarito:");
	for (i=0;i<10;i++){
		printf("\nQuestao %d:\nMarque a-b-c-d = ", i+1);
		scanf ("%c", &gab[i]);
		getchar();
	}

	for (i=0;i<100;i++){
		acertos[i]=0;
		printf("Informa as respostas do aluno %d.\n", i+1);
		for (j=0;j<10;j++){
			printf ("Questao %d:\n", j+1);
			scanf ("%c", &matriz[i][j]);
			getchar();
			if (matriz[i][j] == gab[i]){
				acertos[i] = acertos[i] + 1;
			}
		}
	}

	for (i=0;i<100;i++){
		printf("O aluno %d teve %d acertos!\n", i, acertos[i]);
	}

	getchar();

	return(0);
}


