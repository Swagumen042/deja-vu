#include <stdio.h>  /* printf()*/
#include <stdlib.h> /* atof()*/

int complexProduct(double *a, double *b, double c, double d) {
   double realPart, imagPart;

   realPart = (*a) * c - (*b) * d;
   imagPart = (*a) * d + (*b) * c;
   *a = realPart;
   *b = imagPart;
   return 0;
}

int main(int argc, char **argv) {
   double a, b, c, d;

   system("cls");
   if(argc < 5) {
      printf("Prea putine argumente de intrare\n");
      printf("utilizare: %s a b c d\n", argv[0]);
      printf("pentru afisarea produsului (a + bi) and (c + di)\n\n");
	  getch();
      return -1;
   }
   a = atof(argv[1]);
   b = atof(argv[2]);
   c = atof(argv[3]);
   d = atof(argv[4]);
   printf("(%.3f + %.3fi)(%.3f + %.3fi) = ", a, b, c, d);
   complexProduct(&a, &b, c, d);
   printf("%.3f + %.3fi\n", a, b);
   getch();
   return 0;
}