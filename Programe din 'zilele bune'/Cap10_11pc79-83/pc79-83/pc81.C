#include <stdio.h>
#include <stdlib.h>

int main()   {
  int var1;
  int *Pointer;

  system("cls");

  var1=33;
  printf("Variabila direct: %d\n", var1);

  Pointer=&var1;
  printf("Variabila prin pointer: %d\n", *Pointer);

  *Pointer=0;
  printf("Variabila prin pointer cu alta valoare: %d", *Pointer);
  getch();
  return 0;
}