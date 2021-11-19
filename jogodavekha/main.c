#include <stdio.h>
#include <stdlib.h>
#define TAM 3
int vez;

int menu();
void clear();
void zeraTabuleiro(int tabuleiro[TAM][TAM]);
void exibeTabuleiro(int tabuleiro[TAM][TAM]);
void jogar(int tabuleiro[TAM][TAM]);
int checaLocal(int tabuleiro[TAM][TAM], int linha, int coluna);
int checaLinha(int tabuleiro[TAM][TAM]);
int checaColuna(int tabuleiro[TAM][TAM]);
int checaDiagonal(int tabuleiro[TAM][TAM]);
int checaEmpate(int tabuleiro[TAM][TAM]);
int checaTermino(int tabuleiro[TAM][TAM], int vez);
void jogada(int tabuleiro[TAM][TAM]);

int main(){
    int tabuleiro[TAM][TAM],
        continuar;

    do{
        vez=1;
        continuar = menu();
        if(continuar == 1)
            jogar(tabuleiro);

    }while(continuar);

    return 0;
}

int menu(){
    int opcao;

        printf("\t\tJogo da Velha\n");
        printf("\n1.Jogar\n");
        printf("0.Sair\n");
        printf("\nOpcao: ");

        scanf("%d", &opcao);

        switch(opcao){
           case 1:
           case 0:
                break;
           default:
                clear();
                printf("Opcao invalida. Tente de novo!\n");
        }

    return opcao;
}

void clear(){
    int count=0;

    while(count != 100){
        putchar('\n');
        count++;
    }
}

void zeraTabuleiro(int tabuleiro[TAM][TAM]){
    int linha, coluna;
    for(linha = 0; linha < TAM; linha++){
        for(coluna = 0 ; coluna < TAM; coluna++){
            tabuleiro[linha][coluna] = 0;
        }
    }
}

void exibeTabuleiro(int tabuleiro[TAM][TAM]){
    int linha, coluna;
    putchar('\n');

    for(linha = 0; linha < TAM; linha++){
        for(coluna = 0; coluna < TAM; coluna++){
            if(tabuleiro[linha][coluna] == 0){
                printf("    ");
            }
            else{
                if(tabuleiro[linha][coluna] == 1){
                    printf("  X ");
                }else{
                    printf("  O ");
                }
            }
            if(coluna != (TAM-1)){
                printf("|");
            }
        }
        putchar('\n');
    }
    putchar('\n');
}

void jogar(int tabuleiro[TAM][TAM]){
    int continua;
    zeraTabuleiro(tabuleiro);

    do{
        clear();
        exibeTabuleiro(tabuleiro);
        jogada(tabuleiro);

    }while(checaTermino(tabuleiro, vez) != 1);
}


int checaLocal(int tabuleiro[TAM][TAM], int linha, int coluna){
    if(linha < 0 || linha > (TAM-1) || coluna < 0 || coluna > (TAM-1) || tabuleiro[linha][coluna] != 0){
        return 0;
    }else{
        return 1;
    }
}

int checaLinha(int tabuleiro[TAM][TAM]){
    int linha, coluna, soma;

    for(linha = 0; linha < TAM; linha++){
        soma=0;
        for(coluna = 0; coluna < TAM; coluna++){
            soma += tabuleiro[linha][coluna];

        if(soma==TAM || soma == (-1)*TAM){
            return 1;
        }
    }
}

    return 0;
}

int checaColuna(int tabuleiro[TAM][TAM]){
    int linha, coluna, soma;
    for(coluna = 0; coluna < TAM; coluna++){
        soma=0;
        for(linha = 0; linha < TAM; linha++){
            soma += tabuleiro[linha][coluna];

        if(soma==TAM || soma == (-1)*TAM){
            return 1;
            }
        }
    }

    return 0;
}

int checaDiagonal(int tabuleiro[TAM][TAM]){
    int linha,
        diagonal_principal=0,
        diagonal_secundaria=0;

    for(linha = 0 ; linha < TAM ; linha++){
        diagonal_principal += tabuleiro[linha][linha];
        diagonal_secundaria += tabuleiro[linha][TAM-linha-1];

        if(diagonal_principal==TAM || diagonal_principal==(-1)*TAM ||
           diagonal_secundaria==TAM || diagonal_secundaria==(-1)*TAM){
           return 1;
        }
    }

    return 0;
}

int checaEmpate(int tabuleiro[TAM][TAM]){
    int linha, coluna;
    for(linha = 0; linha < TAM; linha++){
        for(coluna = 0; coluna < TAM; coluna++){
            if(tabuleiro[linha][coluna] == 0){
                return 0;
            }
        }
    }
    return 1;
}

int checaTermino(int tabuleiro[TAM][TAM], int vez){
    if(checaLinha(tabuleiro)){
        printf("Jogo encerrado. Jogador %d venceu !\n\n", (vez%2)+1);
        exibeTabuleiro(tabuleiro);
        return 1;
    }

    if(checaColuna(tabuleiro)){
        printf("Jogo encerrado. Jogador %d venceu !\n\n", (vez%2)+1);
        exibeTabuleiro(tabuleiro);
        return 1;
    }

    if(checaDiagonal(tabuleiro)){
        printf("Jogo encerrado. Jogador %d venceu !\n\n", (vez%2)+1);
        exibeTabuleiro(tabuleiro);
        return 1;
    }

    if(checaEmpate(tabuleiro)){
        printf("Jogo encerrado. Ocorreu um empate! !\n\n");
        exibeTabuleiro(tabuleiro);
        return 1;
    }

    return 0;
}

void jogada(int tabuleiro[TAM][TAM]){
    int linha, coluna;
    vez++;
    printf("\n--> Jogador %d \n", (vez % 2) + 1);

    do{
        printf("Linha: ");
        scanf("%d", &linha);
        linha--;

        printf("Coluna: ");
        scanf("%d", &coluna);
        coluna--;

        if(checaLocal(tabuleiro, linha, coluna) == 0){
            printf("Posicao ocupada ou inexistente, escolha outra.\n");
        }
    } while(checaLocal(tabuleiro, linha, coluna) == 0);

    if(vez%2){
        tabuleiro[linha][coluna] = -1;
    }else{
        tabuleiro[linha][coluna] = 1;
    }
}
