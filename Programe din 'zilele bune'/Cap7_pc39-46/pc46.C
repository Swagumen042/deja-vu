/*program care gaseste toate tripletele (x,y,z) care indeplinesc conditia
x^2 + y^2 = z^2, z<=30 */
#include <stdio.h>
#include <stdlib.h>

int main()   {
   int x,y,z,i=0;

   system("cls");
   printf("Tripletele cautate sunt \n");
   for(z=1;z<=30;z++)
    for(y=1;y<z-1;y++)
     for(x=1;x<z-1;x++) {
	   if (x*x+y*y==z*z) 
	   printf("(%d,%d,%d)\n",x,y,z); 
	   i++;
     }
	printf("%d",i);
   getch();
   return 0;
}
