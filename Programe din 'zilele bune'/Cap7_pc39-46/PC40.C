/*aplicatie pentru WHILE-instructiune repetitiva cu test initial*/

#include <stdio.h>


char ch;

int main() {
   printf("Cititi un caracter (orice diferit de 'n')");
   while (ch!='n')
    scanf("%c",&ch);
   printf("Gata");
   return 0;
}