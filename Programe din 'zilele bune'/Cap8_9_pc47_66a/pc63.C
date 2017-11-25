/* conversie zecimal-hexazecimal */
#include <stdio.h>
#include <stdlib.h>

int main()  {
   int a;

   system("cls");
   scanf("%d",&a);
   ZinH(a);
   getch();
   return 0;
}

int ZinH (int n)  {
   char *htab[ ] = { "0", "1", "2", "3", "4", "5", "6", "7", "8",
    "9", "A", "B", "C", "D", "E", "F" };

   if (n>15)
   ZinH( n/16 );
   printf( "%s", htab[n%16] );
   return 0;
}
/* folositi recursivitatea pentru a crea o functie in cadrul
unui program care face conversia zecimal-binar*/