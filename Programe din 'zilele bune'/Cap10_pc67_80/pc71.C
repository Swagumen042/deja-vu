
#include <stdio.h>
#include <stdlib.h>

int main()  {
   char text_1[100], text_2[100], text_3[100];
   char *ta, *tb;
   int i;
   char text_o[] = "Qwerty";


   system("cls");

   printf("Textul original: %s\n", text_o);
   i=0;
   while ( (text_1[i]=text_o[i]) != '\0' )
     i++;
   printf("Text copiat caracter cu caracter: %s\n", text_1);

   ta=text_o;
   tb=text_2;

   while ( ( *tb++ = *ta++ ) != '\0' )
     ;
   printf("Text copiat folosind solutia cu pointeri: %s\n", text_2);

   getch();
   return 0;
}
