#include <stdio.h>
#include <stdlib.h>
#define MAXNUMVERTICES 100
#define NULO NULL
typedef int tpeso;
typedef int tvertice;
typedef int tapontador;
//typedef nullptr NULO;
typedef struct {
    tpeso mat[MAXNUMVERTICES][MAXNUMVERTICES];
    int num_vertices;
}tgrafo;
void inicializa_grafo(tgrafo *grafo, int num_vertices);
void insere_aresta(tvertice v, tvertice u, tpeso p, tgrafo *grafo);
int existe_aresta(tvertice v, tvertice u, tgrafo *grafo);
void retira_aresta(tvertice v, tvertice u, tgrafo *grafo);
int existe_adj(tvertice v, tgrafo *grafo);
tapontador primeiro_adj(tvertice v, tgrafo *grafo);
tapontador proximo_adj(tvertice v, tvertice aux, tgrafo *grafo);
void recupera_adj(tvertice v, tapontador p, tvertice *u, tpeso *peso, tgrafo *grafo);

int main(){
    printf("Hello world!\n");
    return 0;
}

void inicializa_grafo(tgrafo *grafo, int num_vertices){
    int i,j;
    grafo->num_vertices = num_vertices;
    for(i=0;i<grafo->num_vertices;i++)
        for(j=0;j<grafo->num_vertices;j++)
            grafo->mat[i][j]=0;
}

void insere_aresta(tvertice v, tvertice u, tpeso p, tgrafo *grafo){
    grafo->mat[v][u]=p;
}

int existe_aresta(tvertice v, tvertice u, tgrafo *grafo){
    return grafo->mat[v][u]!=0;
}

void retira_aresta(tvertice v, tvertice u, tgrafo *grafo){
    if(grafo->mat[v][u]==0)
        printf("Erro: Aresta inexistente!");
    else
        grafo->mat[v][u]=0;
}

int existe_adj(tvertice v, tgrafo *grafo){
    tvertice aux;
    for(aux = 0; aux < grafo->num_vertices; aux++){
        if(grafo->mat[v][aux]!=0)
            return 1;
    }
    return 0;
}

tapontador primeiro_adj(tvertice v, tgrafo *grafo){
    tvertice aux;
    for(aux = 0; aux < grafo->num_vertices; aux++){
        if(grafo->mat[v][aux]!=0)
            return aux;
    }
    return NULO;
}

tapontador proximo_adj(tvertice v, tvertice aux, tgrafo *grafo){

    for(aux++; aux < grafo->num_vertices; aux++){
        if(grafo->mat[v][aux]!=0)
            return aux;
    }
    return NULO;
}

void recupera_adj(tvertice v, tapontador p, tvertice *u, tpeso *peso, tgrafo *grafo){
    *u=p;
    *peso= grafo->mat[v][p];
}
