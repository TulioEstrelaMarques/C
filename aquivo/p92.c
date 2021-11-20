#include <stdio.h>
#include <stdlib.h>
main(){
    FILE *fp;
    float pi=3.1415,pi_arq;
    if(!(fp=fopen("arquivo.bin","wb")))
        exit(1);
    if(fwrite(&pi,sizeof(float),1,fp)!=1){
        printf("Erro na escrita do arquivo.");
        exit(2);
    }
    fclose(fp);
    if(!(fp=fopen("arquivo.bin","rb")))
        exit(1);
    if(fread(&pi_arq,sizeof(float),1,fp)!=1){
        printf("Erro na leitura do arquivo.");
        exit(3);
    }
    printf("\nO valor de PI,lido do arquivo eh: %.2f\n",pi_arq);
    fclose(fp);
}
