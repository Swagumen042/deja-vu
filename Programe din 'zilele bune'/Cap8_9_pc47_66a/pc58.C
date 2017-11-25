/*Determinarea cmmdc si cmmmc pentru 2 numere intregi
folosind doua cuvinte 'return'*/
#include <stdio.h>
#include <stdlib.h>

int AlgEuclid(int m,int n,char opt)  {
  int cmmdc,cmmmc;
  int produs=1,rest=1;

  produs=m*n;
  rest=m%n;
  while (rest!=0)  {
    m=n;
    n=rest;
    rest=m%n;
  }
  cmmdc=n;
  cmmmc=produs/cmmdc;
  if (opt==1) return cmmdc;
  return cmmmc;
}

int main()  {
  int n1,n2,divizor,multiplu;

  system("cls");
  printf("Calculul cmmdc si cmmmmc cu algoritmul lui Euclid\n");
  printf("Numerele sunt\n");
  printf("N1 = ");
  scanf("%d",&n1);
  printf("N2 = ");
  scanf("%d",&n2);
  printf("CMMDC = %d \n",AlgEuclid(n1,n2,1));
  printf("CMMMC = %d \n",AlgEuclid(n1,n2,0));
  getch();
  return 0;
}