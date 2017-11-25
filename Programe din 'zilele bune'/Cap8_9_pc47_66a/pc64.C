/* conversie numar zecimal in cuvinte */
#include <stdio.h>
#include <stdlib.h>

int main()  {
   int a;

   system("cls");
   scanf("%d",&a);
   ZinC(a);
   getch();
   return 0;
}

int ZinC(int n) {
   char *tabc[ ] = { "Zero", "Unu", "Doi", "Trei", "Patru",
		    "Cinci", "Sase", "Sapte", "Opt", "Noua" };
   if (n>9)
     ZinC( n/10 );
   printf( "%s ", tabc[n%10] );
   return 0;
}
