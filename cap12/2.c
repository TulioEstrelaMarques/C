/* copia um arquivo em outro */
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
   FILE *in, *out;
   char ch;

   if(argc !=3){
        printf("Voce esqueceu de digitar o nome do arquivo.\n");
        exit(1);
   }
   if((in=fopen(argv[1],"rb"))== NULL){
        printf("O arquivo nao pode ser aberto.\n");
        exit(1);
   }
   if((out=fopen(argv[2],"wb"))==NULL){
        printf("O arquivo nao pode ser aberto.\n");
        exit(1);
   }
   while(!feof(in)){
        ch=getc(in);
        if(ferror(in)){
            printf("Erro de leitura");
            clearerr(in);
            break;
        } else{
            if(!feof(in))
                putc(ch,out);
            if(ferror(out)){
                printf("Erro de escrita");
                clearerr(out);
                break;
            }
        }
   }
    fclose(in);
    fclose(out);
}
