/*Impartirea a doua numere intregi*/
#include <stdio.h>
#include <stdlib.h>

int main()   {
  int a,b,c=0,r=0;

  system("cls");
  printf("Impartirea a doua numere naturale  ");
  printf("- Aplicatie pentru lucrul cu functii -\n\n");
  printf("Programul se termina cand deimpartitul este egal cu 0 \n");
  printf("Deimpartitul este: ");
  scanf("%d",&a);
  while (a!=0)  {
    printf("Impartitorul este: ");scanf("%d",&b);
    c=Imparte(a,b,&r);
    printf("cit = %d  rest = %d\n\n",c,r);
    printf("Deimpartitul este ");scanf("%d",&a);
  }
  return 0;
}

int Imparte(int x,int y, int *rest)  {
   int v,re,cit;

   re=x;v=y;cit=0;
   while (v<=re) v=2*v;
   while (v!=y)  {
     v=v/2;
     cit=2*cit;
     if (v<=re)  {
       re=re-v;
       cit++;
     }
   }
   *rest=re;
   return cit;
}