#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
   char sir1[40], *sir2;
   
   printf("introduceti un sir de caractere: ");
   scanf("%40s", sir1);
   if ((sir2=(char *)malloc(strlen(sir1)+1))==NULL) {
      printf("eroare aloc. dinamica memorie !\n");
	  exit(1);
   }
   strcpy(sir2, sir1);
   printf("Copia sirului este: %s \n", sir2); 
   getch();
   return 0;
}