/*Calculul sumei folosind instructiunea 'for'*/
#include <stdio.h>
#include <stdlib.h>

int main() {
   int k,s;

   system("cls");
   s=0;
   printf("Calculul sumei folosind instructiunea 'for'\n\n");
   for(k=1;k<=100;k++)  {
      printf("%d ",k);
      s=s+k;
   }
   printf("\n Suma este s=%d\n",s);
   getch();
   return 0;
}
/*completati programul astfel incit sa afiseze cite 10 numere pe un rind*/