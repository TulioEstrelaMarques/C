#include <stdio.h>
#include <stdlib.h>
#define MAXNUMVERTICES 100
#define NULO NULL

typedef int tpeso;
typedef int tvertice;

typedef struct{
    tvertice vertice;
    tpeso peso;
    struct taresta *prox
} taresta;

typedef taresta *tapontador;

typedef struct{
    tapontador vet[MAXNUMVERTICES];
    int num_vertices;
}tgrafo;

typedef tgrafo grafo;


int main(){

    return 0;
}

grafo ininciaGrafo(grafo g, int n){}
