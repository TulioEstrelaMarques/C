#include <stdio.h>
#include <stdlib.h>
#define NAO_ENCONTRADO NULL
typedef int TipoChave;

typedef struct{
    TipoChave chave;
} TipoItem;

typedef struct No{
    TipoItem item;
    struct No *prox;
}TipoNo;

typedef TipoNo *Apontador;

typedef Apontador TipoLista;

void InsereListaPosicao(TipoLista *L, int pos, TipoItem i);
void InsereUltimoLista(TipoLista *l, TipoItem i);
void InserePrimeiroLista(TipoLista *l, TipoItem i);
Apontador PesquisaLista(TipoLista *l, TipoChave c);
void RecuperaLista(TipoLista *l, int pos);
void RemoveLista(TipoLista *l, Apontador pos);

int main(){
    printf("Hello world!\n");
    return 0;
}

void InsereListaPosicao(TipoLista *L, int pos, TipoItem i){
    Apontador aux,aux2;
    int c, cont;
    aux = (Apontador)malloc(sizeof(TipoNo));
    aux2 = (Apontador)malloc(sizeof(TipoNo));
    if(aux == NULL || aux2 == NULL){
        printf("\nErro, memoria nao disponivel");
    }else{
        if(pos <= contalista(L) && pos >= 0){
            printf("\nPosicao valida");
            aux->item=i;
            if(*l==NULL){
                *l=aux;
                aux->prox=NULL;
            }else if(pos==contalista(l)){
                aux->prox=NULL;
                aux2=*l;
                for(c=0; c<pos-1; c++){
                    aux2=aux2->prox;
                }
                aux2->prox=aux;
            }else{
                aux->prox=*l;
                aux2=*l;
                for(c=0;c<pos;c++){
                    aux->prox=aux->prox->prox;
                }
                for(c=0;c<pos-1;c++){
                    aux2=aux2->prox;
                }
                aux2->prox=aux;
            }
        }
        else{
            printf("\nPosicao invalida");
        }
    }
}

void InsereUltimoLista(TipoLista *l, TipoItem i){
    Apontador aux,aux2;
    aux=(Apontador)malloc(sizeof(TipoNo));
    aux2=(Apontador)malloc(sizeof(TipoNo));
    if(aux==NULL){
        printf("\nErro, memoria nao disponivel");
    }else{
        aux->item=i;
        if(*l==null){
            *l=aux;
        }else{
            aux2=*l;
            while(aux2->prox!=NULL){
                aux2=aux2->prox;
            }
            aux2->prox=aux;
        }
        aux->prox=NULL;
    }

}

void InserePrimeiroLista(TipoLista *l, TipoItem i){
    Apontador aux;
    aux = (Apontador)malloc(sizeof(TipoNo));
    if(aux == NULL){
        printf("\nErro, memoria nao disponivel");
    }else{
        aux->item=i;
        aux->prox=*l;
        *l=aux;
    }
}

Apontador PesquisaLista(TipoLista *l, TipoChave c){
    Apontador aux;
    aux = *l;
    while(aux!=NULL){
        if(aux->item.chave==c){
            return aux;
        }
        aux=aux->prox;
    }
    return NAO_ENCONTRADO;
}

void RecuperaLista(TipoLista *l, int pos){
    Apontador aux;
    aux=(Apontador)malloc(sizeof(TipoNo));
    int cont = 0;
    if(pos>=0 && pos < ContaLista(l)){
        aux = *l;
        while(cont<pos){
            aux=aux->prox;
            cont++;
        }
        printf("\n%d\n",aux->item.chave);
    }else{
        printf("\nErro, Posicao invalida")
    }
}

void RemoveLista(TipoLista *l, Apontador pos){
    Apontador aux;
    if(*l==NULL){
        printf("\nErro, lista vazia");
    }else if(pos==NULL){
        printf("\nPosicao invalida");
    }else if(pos==*l){
        *l=pos->prox;
        free(pos);
    }else{
        aux = *l;
        while(aux->prox!=pos){
            aux=aux->prox;
        }
        aux->prox=pos->prox;
        free(pos);
    }
}
