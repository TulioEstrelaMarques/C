#include <stdio.h >
#include <ctype.h >
#include <stdlib.h>
#include <string.h>
#include <windows.h>
struct vacas{
    int   cod,atual,ano_nas;
    float qtd_alim,leite_p_se;
    char  abate,op;
};
int i,j,cont;
struct vacas vet[10];

typedef enum{BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY,
LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,YELLOW,WHITE} COLORS;

static int __BACKGROUND = 9;
static int __FOREGROUND = LIGHTGRAY;

void textcolor (int letras, int fundo){
    __FOREGROUND = letras;
    __BACKGROUND = fundo;
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
    letras + (__BACKGROUND << 4));
}

void gotoxy(int x, int y){
  COORD c;
  c.X = x;
  c.Y = y;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int som(int f){
    Beep(f,150);
    return 0;
}

void cadastrar(){
    textcolor(14,0);
    system("cls");
    printf("    Cadastrando\n\n");
    do{
        printf("Entre com codigo do Gado -------------: ");
        fflush(stdin);
        scanf("%d",&vet[cont].cod);
        printf("Entre Com Ano De nascimento do Gado --: ");
        fflush(stdin);
        scanf("%d",&vet[cont].ano_nas);
        printf("Entre Com a Quantidade de Alimento ---: ");
        fflush(stdin);
        scanf("%f",&vet[cont].qtd_alim);
        printf("A quantidade De leite por Semanalmente: ");
        fflush(stdin);
        scanf("%f",&vet[cont].leite_p_se);
        printf("Deseja Continuar  [  S / N  ] --------: ");
        fflush(stdin);
        scanf("%c",&vet[cont].op);
        vet[cont].atual=vet[cont].atual-vet[cont].ano_nas;/*//so funciona com 10 e nao i*/
        if(cont < 10)cont++;
        som(500);
    }while(toupper(vet[cont-1].op) !='N');
}

int main(){
    struct vacas recebe;
    recebe.abate='s';
    recebe.op='s';
    int op;
    textcolor(14,0);
    system("cls");
    printf("Entre com Ano atual ------------------: ");
    fflush(stdin);
    scanf("%d",&vet[cont].atual);
    do{
        system("cls");
        textcolor(10,0);
        for(i=0;i<52;i++){
            gotoxy(i+8,00);printf("%c",205);
            gotoxy(i+8,10);printf("%c",205);
            gotoxy(i+8,12);printf("%c",205);
            if(i<13){
                gotoxy( 8,i);printf("%c",186);
                gotoxy(60,i);printf("%c",186);
            }
        }
        gotoxy( 8,00);printf("%c",201);
        gotoxy( 8,12);printf("%c",200);
        gotoxy(60,00);printf("%c",187);
        gotoxy(60,12);printf("%c",188);
        gotoxy( 8,10);printf("%c",204);
        gotoxy(60,10);printf("%c",185);
        textcolor(14,0);
        gotoxy(10, 2);printf("0 - Sair Do Programa");
        gotoxy(10, 3);printf("1 - cadastrar");
        gotoxy(10, 4);printf("2 - mostrar total de leite por semana");
        gotoxy(10, 5);printf("3 - mostrar total alimento por semana");
        gotoxy(10, 6);printf("4 - mostrar total leite por semana apos abate");
        gotoxy(10, 7);printf("5 - mostrar total alimento por semana apos abate");
        gotoxy(10, 8);printf("6 - mostrar total gado para abate");
        textcolor(11,0);
        for(i=0;i<7;i++){
            gotoxy(10,i+2);
            printf("%c",i+48);
        }
        gotoxy(10,11);printf("Escolha Uma Opcao : ");
        scanf("%d",&op);
        switch(op){
        case 0:
            textcolor(14,0);
            gotoxy(10,14);
            printf("Saindo Do Programa . . . !\n\n");
            Sleep(100);
            som(400);
            Sleep(200);
            textcolor(7,0);
            exit(0);
        case 1:
            cadastrar();
            break;
        default:
            printf("Opcao Invalida . . . !");
            Sleep(1000);
        }
    }while(op!=0);
    printf("\n");
    textcolor(10,0);
    for(i=0;i<cont;i++){
        printf("Ano Atual ----> %d",vet[i].atual);
    }
    textcolor(7,0);
    printf("\n\n");
    return 0;
}
