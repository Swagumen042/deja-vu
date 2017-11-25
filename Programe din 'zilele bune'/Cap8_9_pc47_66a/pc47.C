#include <stdio.h>
#include <stdlib.h>

int main() {       	/* program principal */
  int l,b;         	/* declarare variabile */

  system("cls");        	/* initializari */
  l=-33;

  printf("%d\n ",l);    /* tiparire variabila */
  b=func1(l);           /* apel functie */
  printf("%d\n ",b);    /* tiparire rezultat functie */
  getch();
  return 0;
}

int func1(int arg)  {	/* declaratie functie func1 */
  int m;                /* declarare variabila locala functiei func1 */
  m=func2(arg);         /* apel functie in fucntie */
  return m;
}

int func2(int arg2) {	/* declaratie functie func2 */
  return abs(arg2);
}