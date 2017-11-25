/* determinarea cmmdc si cmmmc pentru doua numere intregi*/
#include <stdio.h>
#include <stdlib.h>

int Cmmdc(int m, int n) {
  int r;

  r=m % n;
  while(r != 0) {
    m=n;
    n=r;
    r=m % n;
  }
  return n;
}

int main() {
   int n1,n2,divizor,multiplu;

   system("cls");
   printf("- Aplicatie pentru functii -\n");
   printf("Calculul CMMDC si CMMMC cu algoritmul lui Euclid\n");
   printf("Numerele sunt:\n");
   printf("N1 = ");
   scanf("%d",&n1);
   printf("N2 = ");
   scanf("%d",&n2);
   divizor=Cmmdc(n1,n2);
   printf("CMMDC = %d\n",divizor);
   printf("CMMMC = %d\n",(n1*n2)/ divizor);
   getch();
   return 0;
}


