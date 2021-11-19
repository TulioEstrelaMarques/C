#include <stdio.h>
#include <stdlib.h>

void kruskal(TGrafo grafo, int t[]){
    TVertice u,v;
    TVertice U[];
    FP q;
    t = notnull;
    q = t[];
    for(int i=1; i<grafo.nvertice;i++){
        U[i]=i;
        while(q){
            if((u < q) && (v < q)){
                t+=(u,v);
                U[p]+=U[q];
                drop(U[q]);
            }
        }
    }
}

int main(){
    printf("Hello world!\n");
    return 0;
}
