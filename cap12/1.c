#include <conio.h>

void main(void){
    char s[23];
    s[0]=20;
    puts("Digite uma string");
    gets(s);
    puts(&s[2]);
}
