#include <stdio.h>
#include <stdlib.h>

int Citeste_vector(int *v,char car)  {
   int i,n;

   for (i=0;i<10;i++)
     v[i]=0;
   printf("Numarul de elemente ale vectorului %c: ", car);
   scanf("%d",&n);
   for (i=0;i<n;i++)  {
     printf("Elementul %c [%d] este: ",car,i);
     scanf("%d",&v[i]);
   }
   return n;
}

void Afiseaza_vector(int *x,int nr,char car)  {
   int i;

   printf("Sirul %c are urmatoarele elemente: ",car);
   for (i=0;i<nr;i++)
     printf("%d ",x[i]);
   printf("\n");
}

int Gasit(int *x,int nr,int elem)  {
   int i=0;

   while (x[i]!=elem && i<nr)
     i++;
   return x[i]==elem;
}

int main() {
  int a[10],b[10];
  int na,nb,indice;
  char c;

  system("cls");
  do  {
    na=Citeste_vector(&a,'a');
    nb=Citeste_vector(&b,'b');
    Afiseaza_vector(&a,na,'a');
    Afiseaza_vector(&b,nb,'b');
    indice=0;
    while((!Gasit(&b,nb,a[indice])) && indice<na)
      indice++;
    if (indice<na) printf("Sirurile au cel putin un element comun\n");
      else printf("Sirurile nu au nici un element comun\n");
    printf("Reluati? (d/n): ");
    scanf("%1s",&c);
  } while(c!='n');
  return 0;
}

/* Completati programul cu afisarea elementelor comune celor doua siruri */
