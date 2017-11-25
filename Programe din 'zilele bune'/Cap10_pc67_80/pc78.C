/* Se citeste de la tastatura un sir format din cuvinte. Se afiseaza
apoi in ordine alfabetica toate cuvintele din sir care incep cu o
anumita litera precizata de utilizator */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char cuvant[20];
typedef	cuvant sir[100];

int Citcuv(sir s) {
  int k,i;

  printf("Numarul de cuvinte: ");
  scanf("%d",&k);
  for (i=0;i<k;i++)
    scanf("%s",s[i]);
    return k;
}

void Ordalf(int m, sir s) {
  int i,ordonat;
  cuvant aux;
  ordonat=0;

  while(!ordonat)  {
    ordonat=1;
    for(i=0;i<=m-2;i++)
      if ( (strcmp(s[i],s[i+1])) > 0){
	strcpy(aux,s[i]);
	strcpy(s[i],s[i+1]);
	strcpy(s[i+1],aux);
	 ordonat=0;
      }
  }
}

int main() {

  sir cuvsir;
  int n,j,i;
  char litera;

  system("cls");
  j=0;
  n=Citcuv(cuvsir);
  Ordalf(n,cuvsir);
  getchar();
  printf("Litera cu care incepe cuvantul este ");scanf("%c",&litera);
  for (i=0;i<n;i++)
    if (cuvsir[i][0]==litera)  {
      j++;
      printf("%s\n",cuvsir[i]);
    }
  printf("Sunt %d cuvinte care incep cu litera %c",j,litera);
  getch();
  return 0;
}
/* Scrieti programul folosind pointeri.
Gasiti o alternativa pentru a nu introduce numarul de cuvinte.*/

