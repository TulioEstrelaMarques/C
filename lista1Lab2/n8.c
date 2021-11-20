#include <stdio.h>

void soma(int *v,int *u,int *t){
    for(int i=0; i<5; i++){
        if((*v%2==0) && (*u%2==1)){
            *t=*u+*v;
        }
        printf("\nT: %d ",t[i]);
    }

}

int main(){
    int i,v[5],u[5],t[5];
    for(i=0;i<5;i++){
        v[i]=rand()%20+1;
        u[i]=rand()%20+1;
        printf("\nV: %d ",v[i]);
        printf("\nU: %d ",u[i]);
    }
    soma(v,u,t);
}
