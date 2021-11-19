#include <string.h>
#include <stdio.h>
#include <ctype.h>

typedef enum {false = 0, true = 1} bool;

bool is_palin (const char* s)
{
   size_t len, i = 0;

   len = strlen(s) - 1;
   while(i <= (len / 2))
   {
       if(s[i] != s[len - i])
           return false;
       i++;
   }
   return true;
}

void strnspace (char* s)
{
   size_t i = 0, p = 0;

   while(*(s + p) != '\0')
   {
       if(!isspace(*(s + p)))
           *(s + i++) = *(s + p);
       p++;
   }
   *(s + i) = '\0';
}

/* Ou
void strnspace (char* s)
{
   char* s1,* s2;
   s1 = s2 = s;

   while(*s1 != '\0')
   {
       if(!isspace(*s1))
           *s2++ = *s1;
       s1++;
   }
   *s2 = '\0';
}
*/

int main()
{
   char buffer[256];

   puts("Teste, é palindromo?");
   scanf("%256[^\n]s", buffer);
   strnspace(buffer);

   if(is_palin(buffer))
       puts("Você acertou! É um palindromo.");
   else
       puts("Você errou! Não é um palindromo.");

   return 0;
}
