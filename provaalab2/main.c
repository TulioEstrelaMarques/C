#include <stdio.h>
#include <stdlib.h>
int A[],B[],tam_a,tam_b,i;
FILE *arq;
int main(){
    void lervetor(int vetA[], int vetB[]);
    void arquivar(FILE *file, int vetA[], int vetB[]);
    void repete(FILE *file, int vetA[], int vetB[]);
    void ler_rep(FILE *file, int vetA[], int vetB[]);
    printf("Prova de Lab2 - Exercicio de alocacao dinamica e manipulaçao de arquivos\n");
    printf("Aluno: Tulio\n\n");
    lervetor(A,B);
    arquivar(arq,A,B);
    repete(arq,A,B);
    ler_rep(arq,A,B);


    return 0;
}
void lervetor(int vetA[], int vetB[]){
    printf("Tamanho do vetor A: ");
    scanf("%d",&tam_a);
    for(i=0;i<tam_a;i++){
        printf("%do Elemento do vetor A: ",i+1);
        scanf("%d",&vetA[i]);
    }

    printf("Tamanho do vetor B: ");
    scanf("%d",&tam_b);
    for(i=0;i<tam_b;i++){
        printf("%do Elemento do vetor B: ",i+1);
        scanf("%d",vetB[i]);
    }

}
void arquivar(FILE *file, int vetA[], int vetB[]){
    file=fopen("Dados.txt","w");
    if(file==NULL){
        exit(1);
    }
    fprintf(file,"A: \n");
    for(i=0;i<tam_a;i++)
        fprintf(file,"%d\n",vetA[i]);

    fprintf(file,"\n\nB: \n");
    for(i=0;i<tam_b;i++)
        fprintf(file,"%d\n",vetB[i]);
    fclose(file);
}

void repete(FILE *file, int vetA[], int vetB[]){
    file=fopen("Dados.txt","r");
    if(file==NULL){
        exit(1);
    }
    for(i=0;i<tam_a;i++)
        fscanf(file,"%d",&vetA[i]);

    for(i=0;i<tam_b;i++)
        fscanf(file,"%d",&vetB[i]);
    fclose(file);

    file= file=fopen("Repetidos.txt","w");
    if(file==NULL){
        exit(1);
    }
    fprintf(file,"A\n");
    for(i=0;i<tam_a;i++)
        fprintf(file,"%d\n",vetA[i]);

    fprintf(file,"\nB\n");
    for(i=0;i<tam_b;i++)
        fprintf(file,"%d\n",vetB[i]);
    fclose(file);
}
void ler_rep(FILE *file, int vetA[], int vetB[]){
    file= file=fopen("Repetidos.txt","r");
    if(file==NULL){
        exit(1);
    }
    printf("A\n");
    for(i=0;i<tam_a;i++){
        fscanf(file,"%d",vetA[i]);
        printf("%d\n",vetA[i]);
    }
    printf("\nB\n");
    for(i=0;i<tam_b;i++){
        fscanf(file,"%d",vetB[i]);
        printf("%d\n",vetB[i]);
    }
    fclose(file);

}

