#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Nmax(double,double);   /* cu si fara prototip*/

Nmax(double a1, double a2) 
{
   double mare;

   if(a1 > a2)
     mare = a1;
   else
     mare = a2;
   printf("Cel mai mare dintre %lf si %lf este %lf\n",a1, a2, mare);
   getch();
   return mare;
}


int main()  {
   
   double r, i=3.0,j=5.0;

   system("cls");
   r=sqrt(Nmax(i,j));
   return 0;
}


