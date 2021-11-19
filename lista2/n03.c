#include<stdio.h>
int imprimenumeros(int n){
    printf("%d\n", n );
    if (n==0){
        return 0;
    }
    else {
        return  imprimenumeros(n-1);
    }
}
void main (){
    int n;
    int y;
    printf("digite um numero\n");
    scanf("%d", &n);
    imprimenumeros (n);

}
