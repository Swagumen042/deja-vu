#include <stdio.h>
#include <stdlib.h>

Swap(int* x, int* y) {
   int t;
   t=*x;
   *x=*y;
   *y=t;
   printf("Din Swap  %d %d\n", *x,*y);
}

int main ()  {

   int a=1;
   int b=2;

   system("cls");
   Swap(&a,&b);
   printf ("Din main dupa Swap %d %d",a,b);
   getch();
}
