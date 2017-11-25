/*Suma cu instructiunea 'while'*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int k,s;

  system("cls");
  s=0;
  k=1;
  printf("Calculul sumei numerelor de la 1 la 10 (cu instructiunea while)\n\n");
  while (k<=10)  {
     printf("%d ",k);
     s=s+k;
     k++;
  }
  printf("\nSuma este %d",s);
  getch();
  return 0;
}