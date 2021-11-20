#include <stdio.h>
#include <stdlib.h>
int vez,i,j;

int menu();
void zeraTab(int tab[3][3]);
void exibeTab(int tab[3][3]);
void jogar(int tab[3][3]);
int checaLocal(int tab[3][3], int i, int j);
bool checaJogo(int tab[3][3], int vez);
int jogada(int tab[3][3]);

int main(){
    char tab[3][3];
    int continuar;

    do{
        vez=1;
        continuar = menu();
        if(continuar == 1)
            jogar(tab);

    }while(continuar);

    return 0;
}

int menu(){
    int opcao;
        printf("\n1.Jogar\n");
        printf("0.Sair\n");
        printf("\nOpcao: ");

        scanf("%d", &opcao);

        switch(opcao){
           case 1:
           case 0:
                break;
           default:
                system("cls");
                printf("Opcao invalida. Tente de novo!\n");
        }

    return opcao;
}

void zeraTab(char tab[3][3]){
    for(i = 0 ; i < 3 ; i++)
        for(j = 0 ; j < 3 ; j++)
            tab[i][j] = 0;
}

void exibeTab(char tab[3][3]){
    printf("\n");
    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3 ; j++){
            if(tab[i][j] == 0)
                printf("    ");
            else
                if(tab[i][j] == 1)
                    printf("  X ");
                else
                    printf("  O ");

            if(j != 2)
                printf("|");
        }
        printf("\n");
    }
    printf("\n");
}

void jogar(char tab[3][3]){
    int continua;
    zeraTab(tab);

    do{
        system("cls");
        exibetab(tab);
        jogada(tab);

    }while(checaJogo(tab, vez) != 1);
}


int checaLocal(char tab[3][3], int i, int j){
    if(i < 0 || i > 2 || j < 0 || j > 2 || tab[i][j] != 0)
        return 0;
    else
        return 1;
}

bool checaJogo(char tab[3][3]){
    bool terminou = false;
    int velha = 0;

    //Linhas
    for(i = 0; i < 3; i++)
        if(tab[i][1] == tab[i][2] && tab[i][2] == tab[i][3])
            terminou=true;
    //Coluna
    for(j = 0; j < 3; j++)
        if(tab[1][j] == tab[2][j] && tab[2][j] == tab[3][j])
            terminou=true;
        //diagonais
        if(i==j)
            terminou=true;
        if(tab[1][3] == tab[2][2] && tab[2][2] == tab[3][1])
            terminou= true;
        //velha
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                if(tab[i][j]!= 'X' && tab[i][j]!='O')
                    velha++;
        if(velha==0)
            terminou = true;

        return terminou;
}

int jogada(char tab[3][3]){
    vez++;
    char jogador[10];
    printf("Qual o nome do jogador? ");
    scanf("%s",&jogador);
    if((vez%2)+1)
        printf("---> %s:\n",jogador);
    else
        printf("---> PC:\n");



    do{
        printf("Linha: ");
        scanf("%d", &i);
        i--;

        printf("Coluna: ");
        scanf("%d", &j);
        j--;

        if(checaLocal(tab, i, j) == 0)
            printf("Posicao ocupada ou inexistente, escolha outra.\n");

    } while(checaLocal(tab, i, j) == 0);

    if(vez%2)
        tab[i][j] = -1;
    else
        tab[i][j] = 1;
}
