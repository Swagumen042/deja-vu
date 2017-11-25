#include <stdio.h>
#include <conio.h>

#define MAXLINE 100

void citeste_in(char *);

int main()   {
   char linie[MAXLINE], *schimba(char *);

   printf("\nScrieti un sir: ");
   citeste_in(linie);
   printf("\n%s\n\n%s\n\n","Asa arata sirul dupa schimbare:", schimba(linie));
   getch();
   return 0;
}

void citeste_in(char s[])
{
   int c, i = 0;
   
   while ((c = getchar()) != EOF && c != '\n')
   s[i++] = c; 
   s[i] = '\0';
} 

char *schimba(char *s)
{
   static char sir_nou[MAXLINE];
   char *p = sir_nou;

   *p++ = '\t';
   for ( ; *s != '\0'; ++s)
   if (*s == 'e')
      *p++ = 'E';
   else 
      if (*s == ' ')   {
         *p++ = '\n';
         *p++ = '\t';
      }
      else 
         *p++ = *s;
         *p = '\0';
   return sir_nou;
}


//De ce vectorul "sir_nou" a fost declarat static ?

//Deoarece numele "sir_nou" este tratat ca un pointer catre adresa de baza a sirului. 
//Fiind declarat "static", acesta se pastreaza in memorie si dupa ce se iese din functia "schimba()".
//Acest lucru nu s-ar fi intamplat daca, de exemplu, sirul ar fi fost declarat "auto". 