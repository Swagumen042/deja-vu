#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()   {
     char linie[100], *sub_text;

     system("cls");
     strcpy(linie,"Text pentru testare operatii cu siruri;");
     printf("Linia: %s\n\n", linie);

     /* concatenare la sfirsitul sirului */
     strcat(linie," operatii de copiere si concatenare.");
     printf("Linie: %s\n\n", linie);

     /* lungimea sirului */
     printf("Lungimea liniei: %d\n\n", (int)strlen(linie));

     /* cautare subsiruri */
     if ( (sub_text = strchr (linie, 'T') ) != NULL )
	    printf("Sirul care incepe cu  \"T\" -> %s\n\n", sub_text);

     if ( ( sub_text = strchr ( linie, 'o' ) )!= NULL )
	    printf("Sirul care incepe cu \"o\" -> %s\n\n", sub_text);

     if ( ( sub_text = strchr ( linie, 'c' ) )!= NULL )
	printf("Sirul care incepe cu \"c\" -> %s\n\n", sub_text);
     printf("Caracterul \"c\" apare in pozitia: %d\n\n", sub_text-linie);
     getch();
     return 0;
}