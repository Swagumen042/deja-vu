/* Citirea si scrierea elementelor unui vector*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  float v[100];
  int n,i;

  system("cls");
  printf("Precizati numarul elementelor vectorului: ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
     printf("v[%d]=",i);
     scanf("%f",&v[i]);
  }
  printf("Elementele vectorului sunt:\n");
  for(i=0;i<n;i++)
    printf("%.2f  ",v[i]);
  getch();
  return 0;
}

/* scrieti programul gasind o varianta care sa nu necesite
precizarea numarului elementelor vectorului*/
