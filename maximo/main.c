#include <stdio.h>
#include <stdlib.h>
int MaximoR(int v[],int n);
int maximo(int v[],int n);
int MaxR(int v[],int i, int n);
int main(){
    int v[]= {1,5,3,7,9};
    int n=5;
    for(int i=0; i<n; i++){
        printf("%d ",v[i]);
    }
    printf("Max = %d",MaximoR(v,n));

}
int MaximoR(int v[],int n){
    if(n==1){
        return v[0];
    }
    else{
        int x = MaximoR(v,n-1);
        if(x> v[n-1]){
            return x;
        }
        else{
            return v[n-1];
        }
    }
}
int maximo(int v[], int n){
    return MaxR(v,0,n);
}

int MaxR(int v[], int i, int n){
    if(i== n-1){
        return v[i];
    }
    else{
        int x = MaxR(v,i+1,n);
        if(x > v[i]){
            return x;
        }
        else{
            return v[i];
        }
    }
}
