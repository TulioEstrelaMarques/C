#include <stdio.h>
#include <stdlib.h>
int main(){
typedef struct jogador{
    char nome[30];
    int idade,posicao,n_camisa;
} jogador;
    int i;
    jogador principais[6];
    jogador reserva[4];
    printf("Cadastro de jogadores principais\n");
    for(i = 0; i < 6; i++){
        printf("Jogador|%d|\n",i+1);
        printf("Nome: ");
        scanf("%s",&principais[i].nome);
        printf("Idade: ");
        scanf("%d",&principais[i].idade);
        printf("Posicao [1...6]: ");
        scanf("%d",&principais[i].posicao);
        printf("Numero: ");
        scanf("%d",&principais[i].n_camisa);
    }
    system("cls");
    printf("Cadastro de jogadores reservas\n");
    for(i = 0; i < 4; i++){
        printf("Jogador|%d|\n",i+1);
        printf("Nome: ");
        scanf("%s",&reserva[i].nome);
        printf("Idade: ");
        scanf("%d",&reserva[i].idade);
        printf("Posicao [1...6]: ");
        scanf("%d",&reserva[i].posicao);
        printf("Numero: ");
        scanf("%d",&reserva[i].n_camisa);
    }
    system("cls");
    printf("Jogadores principais:\n");
    for(i=0;i<6;i++){
        printf("Nome: %s\nIdade: %d\n",principais[i].nome,principais[i].idade);
        printf("Posicao: %d\nNumero: %d\n",principais[i].posicao,principais[i].n_camisa);
    }
    system("cls");
    printf("Jogadores reservas:\n");
    for(i=0;i<4;i++){
        printf("Nome: %s\nIdade: %d\n",reserva[i].nome,reserva[i].idade);
        printf("Posicao: %d\nNumero: %d\n",reserva[i].posicao,reserva[i].n_camisa);
    }
    return 0;
}
