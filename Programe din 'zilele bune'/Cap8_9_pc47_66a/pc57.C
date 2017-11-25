/*Calculul valorii unei functii date intr-un punct
f(x) = |x^2,      x <= -1
       |x+3,      -1 < x <= 1
       |arctg(x),  x > 1 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float F(float x)  {

   if (x<=-1) return x*x;
   else if(x<=1) return x+3;
	else return atan(x);
}

int main() {
   float v;

   system("cls");
   printf("Calculul valorii unei functii pentru ");
   printf("un argument citit de la tastatura  \n");
   printf("Valoarea argumentului este: ");
   scanf("%f",&v);
   printf("Valoarea functiei in punctul %.2f este %.2f",v,F(v));
   getch();
  return 0;
}
