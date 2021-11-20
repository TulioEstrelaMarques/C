#include <stdio.h>

void MouM(int *v){
    int mai,men;
    for(int i=0;i<5;i++){
        if(i==0){
            mai=*v;
            men=*v;
        } if(*v>mai){
            mai=*v;
        } else{
            men=*v;
        }
    }
    printf("o maior-> %d end = %p e o menor-> %d end = %p",mai,v,men,v);
}

int main(){
    int v[5];
    for(int i=0; i<5; i++){
        printf("ELEMENTO %d: ",i+1);
        scanf("%d",&v[i]);
    }
    MouM(v);
}
