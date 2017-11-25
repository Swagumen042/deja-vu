/* variatiune a programului func_imp.c- !nu programati asa!
 si nici nu folositi variabile globale in interiorul functiei!! */

#include <stdio.h>
#include <stdlib.h>


int main() {
   int a,b,cit,rest;

   system("cls");
   printf("Impartirea a doua numere naturale\n");
   printf("Se iese din program cu deimpartit egal cu 0\n");
   printf("Deimpartitul este: ");
   scanf("%d",&a);
   while(a != 0) {
      printf("Impartitorul este: ");
      scanf("%d",&b);
      Imparte(a,b,&cit,&rest);
      printf("%d : %d = %d rest %d\n",a,b,cit,rest);
      printf("Deimpartitul este: ");
      scanf("%d",&a);
  }
  return 0;
}
Imparte(int x, int y, int *c, int *r) {
  int cit=0,rest,v;
  rest=x;
  v=y;
  while(v <= rest)
    v=2*v;
  while(v != y) {
    v=v/2;
    cit=2*cit;
    if(v <= rest) {
      rest -= v;
      cit++;
    }
  }
  *c=cit;
  *r=rest;
}

