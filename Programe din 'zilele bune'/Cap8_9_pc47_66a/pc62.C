#include <stdio.h>
#include <stdlib.h>
/*exemplu pentru recursivitate*/
/*precizati inainte de a pune in executie programul, ce face acesta */

int main() {

   system("cls");
   Rec();
   getchar();
   return 0;
}

int Rec()  {
   char ch;

   if ( (ch=getchar( ))!='\n' )
     Rec();
   putchar(ch);
   return 0;
}