// se tiver jeito de reduzir o cod eu agradeço
#include <stdio.h>
main(){
    int n1,n2,n3,mai,men,mei;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if((n1>n2) && (n1>n3)){
        mai=n1;
    } if(n2>n3){
        mei = n2;
        men = n3;
    } else{
        mei = n3;
        men = n2;
    } else if((n2>n1) && (n2>n3)){
            mai=n2;
        } if(n1>n3){
            mei = n1;
            men = n3;
        } else{
            mei = n3;
            men = n1;
        } else if((n3>n2) && (n1<n3)){
                mai=n3;
            } if(n2>n1){
                mei = n2;
                men = n1;
            } else{
                mei = n1;
                men = n2;
            }
            printf("%d, %d, %d",mai,mei,men);

}
