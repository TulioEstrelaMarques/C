#include <stdio.h>
#define TAM 3


int menu();
void carrega_vetor(int *v);
int pertence(int vet[TAM], int num);

void uniao_vet(int x[TAM], int y[TAM]);
void diferenca_vet(int x[TAM], int y[TAM]);
void soma_vet(int x[TAM], int y[TAM]);
void interseccao_vet(int x[TAM], int y[TAM]);

int main(){
    int op=0, i=0,
        vetor_1[TAM],
        vetor_2[TAM];

    puts("\nCarregando o 1º vetor.");
    carrega_vetor(vetor_1);

    puts("\nCarregando o 2º vetor.");;
    carrega_vetor(vetor_2);

    do{
        op = menu();
        switch(op){
            case 1:
                puts("\nUniao de X com Y:\n ");
                uniao_vet(vetor_1, vetor_2);
                break;
            case 2:
                puts("\nDiferenca entre X e Y:\n ");
                diferenca_vet(vetor_1, vetor_2);
                break;
            case 3:
                puts("\nSoma entre X e Y:\n ");
                soma_vet(vetor_1, vetor_2);
                break;
            case 4:
                puts("\nInterseccao entre X e Y:\n ");
                interseccao_vet(vetor_1, vetor_2);
                break;
        }
    }while(op!=0);

    return 0;
}

void carrega_vetor(int *v){
    int i, x;
    for(i=0;i<TAM;i++){
        printf("\tItem na posicao %d do vetor: ", i);
        scanf("%d", &x);
        v[i]=x;
        fflush(stdin);
    }
}

int menu(){
    int opcao=-1;
    puts("\nMenu:");
    puts("\t1) Uniao de X com Y.");
    puts("\t2) Diferenca de X e Y.");
    puts("\t3) Soma entre X e Y.");
    puts("\t4) Interseccao entre X e Y.");
    puts("\t0) Sair.");
    while(opcao<0 || opcao > 4){
        printf("\tEscolha uma opcao (entre 0 e 4): ");
        scanf("%d", &opcao);
    }
    return opcao;
}

int pertence(int vet[TAM], int num){
    int i;
    for(i=0;i<TAM;i++){
        if(vet[i]==num){
            return 1;
        }
    }
    return 0;
}

void uniao_vet(int x[TAM], int y[TAM]){
    int i;
    printf(" {");
    for (i = 0; i < TAM; ++i){
        printf("%d", x[i]);
        if(TAM-i!=1){
            printf(", ");
        }
    }
    for (i = 0; i < TAM; ++i){
        if(pertence(x,y[i])==0){
            printf(", ");
            printf("%d", y[i]);
        }
    }
    printf("}\n");
}

void diferenca_vet(int x[TAM], int y[TAM]){
    int i, ja=0;
    printf(" {");
    for (i = 0; i < TAM; ++i){
        if(pertence(y,x[i])==0){
            if(i!=0 && ja==1){
                printf(", ");
            }
            printf("%d", x[i]);
            ja=1;
        }
    }
    printf("}\n");
}

void soma_vet(int x[TAM], int y[TAM]){
    int i, ja;
    printf(" {");
    for (i = 0; i < TAM; ++i){
        if(i!=0 && ja==1){
            printf(", ");
        }
        printf("%d", x[i]+y[i]);
        ja=1;
    }
    printf("}\n");
}

void interseccao_vet(int x[TAM], int y[TAM]){
    int i, ja=0;
    printf(" {");
    for (i = 0; i < TAM; ++i){
        if(pertence(y,x[i])==1){
            if(i!=0 && ja==1){
                printf(", ");
            }
            printf("%d", x[i]);
            ja=1;
        }
    }
    printf("}\n");
}
