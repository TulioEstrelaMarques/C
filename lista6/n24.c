#include <stdio.h>
main(){
    char nome[10];
    int mat;
    float n1,n2,n3,med;
    printf("Dados do aluno...\n");
    printf("Nome: ");
    scanf("%s",&nome);
    printf("Matricula: ");
    scanf("%d",&mat);
    printf("Nota 1: ");
    scanf("%f",&n1);
    printf("Nota 2: ");
    scanf("%f",&n2);
    printf("Nota 3: ");
    scanf("%f",&n3);
    med = (n1+n2+n3)/3;
    printf("O aluno: %s\nNo de matricula: %d\n",nome,mat);
    printf("Status: ");
    if(med>=6){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }
}
