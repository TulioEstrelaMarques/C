#include <stdio.h>
#include <math.h>

#define MAXSIZE 10

double media(double s[], int n){
    double sum = 0.0;
    int i = 0;

    for(i = 0; i < n; i++)
        sum += s[i];

    return sum / n;
}

double variancia(double s[], int n){
    double sum = 0.0;
    double dev = 0.0;
    double med = media(s, n);
    int i = 0;

    for(i = 0; i < n; i++){
        dev = s[i] - med;
        sum += (dev * dev);
    }

    return sum / n;
}

double desvio_padrao(double s[], int n){
    double v = variancia(s, n);
    return sqrt( v );
}

int main(){
    double vetor[MAXSIZE];
    int  i;

    for(i = 0; i < MAXSIZE; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    printf("Media = %g\n", media(vetor, MAXSIZE));
    printf("Variancia = %g\n", variancia(vetor, MAXSIZE));
    printf("Desvio Padrao = %g\n", desvio_padrao(vetor, MAXSIZE));

    return 0;
}
