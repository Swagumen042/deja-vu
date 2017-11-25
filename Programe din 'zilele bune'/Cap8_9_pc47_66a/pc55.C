#include <stdio.h>
#include <stdlib.h>

int main()  {
   int Nmax(int,int,int);

   int i,j;
   /*int k; */
   for(i = 0; i <= 5; i++){
      for(j = 0; j <= 5; j++)
	Nmax(i,j);
   }
   return(0);
}

int Nmax(int a1, int a2,int a3){         /* + int*/
   int mare;

   if(a1 > a2)
     mare = a1;
   else
     mare = a2;
   printf("Cel mai mare dintre %d si %d este %d\n",a1, a2, mare);
   return mare;
}

/* afisati rezultatele ecran cu ecran */