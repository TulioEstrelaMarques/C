#include <stdio.h>
#include <stdlib.h>

void display4(char *s){
    while(*s!='\0'){
        printf("%c",*s++);
    }
}

int main(){
    char s[10];
    scanf("%s",s);
    display4(s);
    return 0;
}
