#include <stdio.h>
#define NUM_AL 3
int i,j;
int main(){
    int ap;
    typedef struct questao{
        char gab;
    }questao;
    typedef struct aluno{
        questao avalia;
        char resp[10];
        int matri;
        float nota;
    } aluno;
    questao p[10];
    aluno a[NUM_AL];
    printf("--------Gabarito--------");
    for(i=1;i<=10;i+=1){
        printf("\nGabarito Q%d: ",i);
        scanf("%c",&p[i].gab);
    }
    system("cls");
    printf("--------Prova--------");
    printf("se quiser sair matricule 9999...");
    do{
        for(i=1;i<=NUM_AL;i++){
            printf("Matricula: ");
            scanf("%d",&a[i].matri);
            for(j=0;j<10;j++){
                printf("Resposta Q%d: ",j+1);
                scanf("%d",&a[j].resp);
                    if(a[j].resp==a[j].avalia.gab)
                        a[j].nota+=1;
            }
        }
    }while(a[i].matri!=9999);


    for(i=1;i<=NUM_AL;i++){
            printf("Matricula: %d",a[i].matri);
            printf("Nota: %.1f",a[i].nota);
            if(a[i].nota>7)
                ap++;

    }
    printf("%1.f% de aprovacao",ap/NUM_AL);
}
