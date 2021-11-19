#include <stdio.h>

int main(){
    int v[15],maior,i;
    printf("Vetor: ");
    for(i=0;i<15;i++)
        scanf("%d",v[i]);
    for(i=0;i<15;i++){
        if(i==0)
            maior=v[i];
        else if(v[i]>maior)
            maior=v[i];
    }
    printf("\n");
    for(i=0;i<15;i++){
        v[i] = v[i]/maior;
        printf("%d ",v[i]);
    }

}
