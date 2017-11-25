#include <stdio.h>
#include <stdlib.h>
#define LTAB 20

int main()  {
  int tab[LTAB];
  int i;

  for(i = 0; i < LTAB; i++)  {
    tab[i] = i;
    i[tab]++;
    printf("tab[%d] = %d\n", i, tab[i]);
  }
  printf("15[tab] = %d\n", 15[tab]);
  getch();
  return 0;
}
