/* Programul calculeaza valoarea unui polinom pentru un anumit argument.*/

#include<stdio.h>
#include<stdlib.h>

int Polinom(int a,double* t,int n) {
  double p=t[0];
  int i=0;

  for(i=1;i<(n+1);i++)
    
	  p=p*a+t[i];
  
  printf("%.3lf",p);
  return 0;
}

int main()  {
  double * t,x;
  int i=0,n=0;

  system("cls");
  printf("Precizati gradul polinomului: ");
  scanf("%d",&n);

  t=(double *)malloc((n+1)*sizeof(double));
  
  printf("Precizati coeficientii: \n");
  for(i=0;i<(n+1);i++)     {
    printf("\tP[%d] = ",i);
    scanf("%lf",&t[i]);
  }
  
  printf("Precizati argumentul: ");
  scanf("%lf",&x);
  
  Polinom(x,t,n);
  getch();
  return 0;
}
/*completati programul cu o functie care sa afiseze polinomul in x dupa
introducerea coeficientilor */