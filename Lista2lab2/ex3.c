#include <stdio.h>

int imprimaNum(int n){
    if(n==0){
        return 0;
    } else{
        return imprimaNum(n+1);
    }
}

int main(){
    int n;
    printf("Ate q numero vc quer imprimir? ");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        printf("%d",imprimaNum(n));
    }

}
