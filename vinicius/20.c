#include <stdio.h>

int main(){
    int vendas[2][4], vendas_semana[2], vendas_mes=0, vendas_vendedor[2];
    int l, c, n;
    for ( l = 0; l < 4; l++ )
        vendas_semana[l] = 0;
    for ( l = 0; l < 2; l++ )
        vendas_vendedor[l] = 0;

    printf("Favor digitar as vendas por vendedor, em reais:\n");
    for( l = 0; l < 4; l++ ){
        for( c = 0; c < 2; c++ ){
            printf( "\nVendedor %d - Semana %d:", c + 1, l + 1 );
            scanf( "%d", &vendas[c][l] );
            vendas_mes += vendas[c][l];
            vendas_vendedor[c] += vendas[c][l];
            vendas_semana[l] += vendas[c][l];
        }

    }
    printf( "Total de vendas no mes: R$%.2f\n", (float)/*força ssir float*/ vendas_mes );
    for( n = 0; n < 2; n++ )
        printf( "Vendas vendedor %d: R$%.2f\n", n + 1, (float) vendas_vendedor[n] );
    for( n = 0; n < 4; n++ )
        printf( "Vendas semana %d: R$%.2f\n", n + 1, (float) vendas_semana[n] );

    return 0;
}
