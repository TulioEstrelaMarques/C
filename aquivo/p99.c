#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[8];
}dados_alunos;

void testaArquivo(FILE *fp){
    if(fp==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
}
void gravaDadosArq(FILE *fp, dados_alunos aluno){
    fp=fopen("testep94.txt","w");
    testaArquivo(fp);
    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    //scanf("%s",&aluno.nome);
    fgets(aluno.nome,8,stdin);
    fwrite(&aluno,sizeof(dados_alunos),1,fp);
    fclose(fp);
}

dados_alunos leDadosArq(FILE *fp,dados_alunos aluno){
    fp=fopen("testep99.txt","r");
    testaArquivo(fp);
    fread(&aluno,sizeof(dados_alunos),1,fp);
    fclose(fp);
    return(aluno);
}

void imprimeDadosTela(dados_alunos aluno){
    printf("\n\nDados do arquivo:\n");
    printf("Nome...:%s\n",aluno.nome);
}

main(){
    FILE *fp;
    dados_alunos aluno;
    gravaDadosArq(fp,aluno);
    printf("Digite o nome do aluno: ");
    scanf("%s",&aluno.nome);
    aluno = leDadosArq(fp,aluno);
    imprimeDadosTela(aluno);
    system("pause");
}
