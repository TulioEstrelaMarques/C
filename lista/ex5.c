#include <stdio.h>

int main() {
   int v[20], i, n=20;
   for (i=0; i<n; i++) {
      printf("Informe v[%d]: ", i);
      scanf("%d", &v[i]);
   }
   for (i=0; i<n; i++) {
      for (j=i+1; j<n; j++) {
         if (v[i] == v[j]) {
            for (k=j+1; k<n; k++)
               v[k-1] = v[k];
            n--;
         }
      }
   }
   printf("Vetor sem repetições:\n");
   for (i=0; i<n; i++)
      printf("\t%d", v[i]);
   return 0;
}
