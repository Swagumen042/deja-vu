#include <stdio.h>
#include <stdlib.h>

int main()  {
  int x, *p;

  system("cls");
  p = &x;         /* initializarea pointerului */
  *p = 0;         /* valoarea lui x este zero */

  printf(" x este %d\n", x);
  printf(" *p este %d\n", *p);

  *p += 1;        /* incrementarea valorii catre care indica p */
  printf(" x este %d\n", x);

  (*p)++;         /* incrementarea valorii catre care indica p */
  printf(" x este %d\n", x);
  getch();
  return 0;
}
