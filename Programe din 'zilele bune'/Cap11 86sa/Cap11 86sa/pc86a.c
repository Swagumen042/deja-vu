#include <stdio.h>
#include<ctype.h>

int numarare_cuvinte(char*);

int main()   {
	char sir[30];

	printf("Scrieti un text:  ");
	gets(sir);
	printf("Sunt %d cuvinte", numarare_cuvinte(sir));
	getch();
	return 0;
}

int numarare_cuvinte(char *s)
{
   int contor = 0;

   while (*s != '\0')   {
   while (isspace(*s)) /* sarim spatiile goale */
      ++s;
      if (*s != '\0') /* gasim un cuvant */ {
	     ++contor;
       while (!isspace(*s) && *s != '\0') /* sarim peste cuvant */
          ++s;
      }
   }
   return contor; 
}