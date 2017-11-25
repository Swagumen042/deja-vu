#include <stdio.h>
#include <stdlib.h>

int main() {
   char ch;

   system("cls");
   for(ch='Z';ch >= 'A';ch--)
   printf("%c ",ch);
   getch();
   return 0;
}
