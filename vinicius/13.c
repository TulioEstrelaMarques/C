#include <stdio.h>

int main(){
    int m[5][3],qtdd=0,i,j;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("\nElemento [%d][%d]: ",i+1,j+1);
            scanf("%d",&m[i][j]);
            if(m[i][j]>=15 && m[i][j]<=20)
                qtdd++;
        }
    }
    printf("Entre 15 e 20 tem %d elementos...",qtdd);
}
