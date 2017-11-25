/*Suma cu instructiunea do-while*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int k=1,s=0;

   system("cls");
   printf("Calculul sumei numerelor de la 1 la 10 (cu instructiunea do-while)\n\n");
   do {
      printf("%d ",k);
      s += k;
      k++;
   } while (k <= 10);
   putchar('\n');
   printf("Suma este %d\n",s);
   getch();
   return 0;
}
