/*Bubble sort */

#include <stdio.h>
#include <stdlib.h>

Cit_sir(int m,int *sir_x) {
  int i;

  for(i=0;i<m;i++)  {
    printf("Sir [%d] = ",i);
    scanf("%d",&sir_x[i]);
  }
}

Sortare(int m,int *sir_x)  {
  int i,ordonat=0,aux;

  while(!ordonat)  {
    ordonat=1;
    for(i=0;i<=m-2;i++)
      if (sir_x[i]>sir_x[i+1])  {
	 aux=sir_x[i];
	 sir_x[i]=sir_x[i+1];
	 sir_x[i+1]=aux;
	 ordonat=0;
      }
  }
}

int main() {
  typedef int tab_val[50];

  tab_val sir;
  int n,i;

  system("cls");
  printf("Introduceti numarul elementelor sirului care trebuie sortat: ");
  scanf("%d",&n);
  Cit_sir(n,&sir);
  Sortare(n,&sir);
  printf("Numerele ordonate crescator sunt: ");
  for (i=0;i<n;i++) printf("%d ",sir[i]);
  getch();
  return 0;
}

/* scrieti programul fara a indica numarul elementelor din sir;
indicati ce elemente care nu apartin standardului ANSI C
sunt prezente in acest program */