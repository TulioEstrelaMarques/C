#include <stdio.h>
#define N 10
#include <math.h>
int main(){
   int vet[N],i,m,s,S,DP;
   for(i=0;i<N;i++){
    vet[i]=rand()%20+1;
    printf("%d ",vet[i]);
    s+=vet[i];
   }
    m=s/N;
    for(i=0;i<N;i++)
        S+=pow((vet[i]-m),2);
    DP=S/(N-1);
    printf("\no desvio padrao eh: %d",DP);
}
