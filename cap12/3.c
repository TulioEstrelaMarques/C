#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    int fd;
    if((fd=open(argv[1],O_RDONLY))==-1){
        printf("O arquivo nao pode ser aberto.");
        exit(1);
    }
    printf("O arquivo ja existe.\n");
    if(close(fd))
        printf("Erro no fechamento do arquivo.\n");
}
