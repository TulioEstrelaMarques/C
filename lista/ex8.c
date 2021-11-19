#include <stdio.h>
#include <stdlib.h>

int main(){

	int iVetorA[10],iVetorB[10],iVetorC[10],i;

	for(i =0;i<10;++i)
	{
	printf("Digite o primeiro vetor [%d] posicao: ",i);
	scanf("%d",&iVetorA[i]);
	}
	for(i =0;i<10;++i)
	{
	printf("\n Digite o segundo vetor [%d] posicao: ",i);
	scanf("%d",&iVetorB[i]);
	}
	for(i=0;i<10;++i){
	iVetorC[i]=iVetorA[i];
	iVetorC[++i]=iVetorB[i];
	}

	for(i =0;i<10;++i)
	printf("Os valores do primeiro e do segundo vetor digitados e: [%d]: %d\n",i,iVetorC[i]);
	system("pause");
  }
