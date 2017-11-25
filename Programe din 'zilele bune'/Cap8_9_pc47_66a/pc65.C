/* ridicare la putere cu exponent negativ*/
#include <stdio.h>
#include <stdlib.h>

double LaPutere(double x, int y) {

   if (y==0)
     return(1);
   else if (y>0)
	   return(x*LaPutere(x,y-1));
	else
	   return((1/x)*LaPutere(x,y+1));
}

int main()  {
   double a;
   int b;

   system("cls");
   scanf("%lf%d",&a,&b);
   printf("%.4lf",LaPutere(a,b));
   getch();
   return 0;
}
/* de ce definesc acum functia inainte de 'main', iar
in programele rec2.c si rec3.c am defint-o dupa 'main'?*/
