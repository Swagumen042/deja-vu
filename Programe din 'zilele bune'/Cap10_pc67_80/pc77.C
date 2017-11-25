#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()  {
   char dest[25];
   char *blank =" ", *cuv1 = "Andrei", *cuv2 = "Sfantul";

   system("cls");
   strcpy(dest, cuv2);
   strcat(dest, blank);
   strcat(dest, cuv1);

   printf("%s\n", dest);
   getch();
   return 0;
}