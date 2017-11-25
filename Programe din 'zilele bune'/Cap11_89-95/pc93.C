#include <stdio.h>
#include <stdlib.h>

void func(int);

int main() {
  void (*fp)(int);

  system ("cls");
  fp = func;
  (*fp)(1);
  fp(2);
  getch();
  return 0;
}

void func(int arg)  {
  printf("%d\n", arg);
}
