#include <stdio.h>
int e;
void armazena(int *v, int *u){
    for(int i = 0; i<5;i++){
    v=rand()%20+1;
    u=rand()%20+1;
    }
}
int escalar(int *u, int *v){
    for(int i = 0; i < 5; i++){
        e+= v[i]*u[i];
    }
}

void imprimir(int *u, int *v, int e){
    for(int i=0; i<5;i++){
        printf("U:\n%d ",u[i]);
        printf("V:\n%d ",v[i]);
    }
    printf("E: %d ",e);

}

int main(){
    int v[5],u[5];
    armazena(v,u);
    escalar(u,v);
    imprimir(u,v,e);
}
