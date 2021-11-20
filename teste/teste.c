#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
typedef struct{ // estrutura aluno
    char nome[20], situacao[10];
    int matricula, numero_aula, frequencia;
    float p1, p2, e1, e2, t1, media;
}aluno;

typedef struct{ //estrutura turma
    aluno a[50];
    char nome;
} turma;

int x,t;
void cadastro_aluno (aluno dados[50]);
void cadastro_turma(turma dados[10]);
void ler_notas(aluno dados[50]);
main(){
	setlocale(LC_ALL,"portuguese");

	aluno dados[50];
	int op,i;
	do{
	printf("Para cadastro de turma - Digite 1\n");
	printf("Para cadastro de alunos - Digite 2\n");
	printf("Para cadastro de notas - Digite 3\n");
	printf("Para ver lista com situação - Digite 4\n");
	printf("Para ver lista com alunos aprovados - Digite 5\n");
	printf("Para ver lista com alunos reprovados - Digite 6\n");
	printf("Para sair - Digite 0\n");
	printf("Digite a opção que deseja: ");
	scanf("%d",&op);
	switch (op){
        case 1:
            cadastro_turma(dados);
            break;
        case 2:
            cadastro_aluno(dados);
            break;
        case 3:
            ler_notas(dados);
            break;
	}
    system("cls");
	}while(op!=0);



}
void cadastro_aluno (aluno dados[50]){
	int i;

	printf("Digite a quantidade de alunos que tem na turma e não deve ultrapassar a 50: ");
	scanf("%d",&x);

	for(i=0;i<x;i++){
		printf("Digite o nome do aluno: ");
		scanf("%s" ,&dados[i].nome);
		printf("Digite o número da matricula do aluno: ");
		scanf("%d",&dados[i].matricula);
		if (dados[i].matricula = dados[i].matricula){
			printf("essa matricula ja existe\n");
			printf("Digite sua matrícula novamente: ");
			scanf("%d",&dados[i].matricula);
}
}
}

void cadastro_turma(turma dados[10]){
    int i;
    printf("Quantas turmas quer cadastrar (limite 10)? ");
    scanf("%d",&t);
    for(i = 0; i<t; i++){
        printf("Nome da turma: ");
        scanf("%s",&dados[i].nome);
    }
}

void ler_notas(aluno dados[50]){
	int i;
		for(i=0;i<x;i++){
		printf("Digite a nota da primeira prova: ");
		scanf("%f",&dados[i].p1);
		printf("Digite a nota da segunda prova: ");
		scanf("%f",&dados[i].p2);
		printf("Digite a nota do primeiro exercício: ");
		scanf("%f",&dados[i].e1);
		printf("Digite a nota do segundo exercício: ");
		scanf("%f",&dados[i].e2);
		printf("Digite a nota do trabalho final: ");
		scanf("%f ",&dados[i].t1);
		printf("Digite a frequência do aluno (maximo 64 aulas)");
		scanf("%d",&dados[i].frequencia);
        dados[i].media = (dados[i].e1+dados[i].e2+dados[i].t1+dados[i].p1+dados[i].p2)/5;
        if((dados[i].media >= 70) && (dados[i].frequencia>=40)){
            dados[i].situacao="Aprovado";
        } else{
            dados[i].situacao="Reprovado";
        }
    }
}

void imprimir_dados(turma dados[10]){
    printf("Escolha a turma para imprimir os dados: ");
    scanf("%s",&dados.nome);
    if(dados.nome){
            for(int i=0;i<50;i++){
                printf("Matricula: %d",dados[i].a.matricula);
                printf("\nNome: %s\nMedia: %.1f",dados[i].a.nome,dados[i].a.media);
                printf("\nFrequencia: %d\nSituacao: %s\n",dados[i].a.frequencia,dados[i].a.situacao);

            }
    }else{
        printf("Essa turma nao existe...");
    }
}
void imprimir_lista(aluno dados){
    char op[10];
    printf("Deseja listar: Aprovados, reprovados ou todos?");
    scanf("%s",&op);
    if(op == dados.situacao == "Aprovado"){
        imprimir_dados();
    }else if(op == dados.situacao == "Reprovado"){
        imprimir_dados();
    }else{
        imprimir_dados();
    }
}
void imprimir_situacao(aluno dados){
    printf("Digite o numero de matricula do aluno: ");
    scanf("%d",dados.matricula);
    if(dados.matricula){
        printf("------Exercicios-----");
        printf("\tEx1: %.1f\tEx2: %.1f",dados.e1,dados.e2);
        printf("------´Provas-----");
        printf("\tP1: %.1f\tP2: %.1f",dados.p1,dados.p2);
        printf("------Trabalho-----");
        printf("\tT1: %.1f",dados.t1);
        printf("------Media-e-Frequencia-----");
        printf("\tMedia: %.1f\tFreq: %d",dados.media,dados.frequencia);
        printf("------Situacao-----");
        printf("\tStatus Final: %s",dados.situacao);
    } else{
        printf("Essa matrucula eh invalida...");
    }

}
