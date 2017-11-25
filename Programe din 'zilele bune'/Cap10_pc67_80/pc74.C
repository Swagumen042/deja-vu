/* Se citeste un text si apoi se inlocuiesc toate aparitiile unui
 sir de caractere 'sir1' cu un alt sir de caractere  'sir2',
 citite inainte de a introduce textul.Textul se termina cu eoln. (ctrl + Z)
 Se face atentionarea ca 'sir1' nu trebuie sa fie inclus in
 'sir2', aceasta ducand la cicluri infinite*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char linie[256],*ln,*ln1,*ln2,sir1[30],sir2[30];
  int pozitie,l;

  ln=(char*) malloc(sizeof(char));
  ln1=(char*) malloc(sizeof(char));
  ln2=(char*) malloc(sizeof(char));

  system("cls");
  printf("Sirul sir1 este: ");
  fgets(sir1,30,stdin);          /*gets(sir1)*/
  l=strlen(sir1)-1;
  sir1[l]=0;        /*  sir1[strlen(sir1)-1]=0;  */
  printf("Sirul sir2 este: ");
  fgets(sir2,30,stdin);
  sir2[strlen(sir2)-1]=0;

  printf("Textul este: ");
  do {
     fgets(linie,256,stdin);
     linie[strlen(linie)-1]=0;
	 ln1=&sir1[1];
	 ln2=linie;
     pozitie=strstr(linie,sir1)-ln2;
     while(pozitie >= 0) {
	strncpy(ln1,ln2,pozitie);
	ln1[pozitie]='\0';
	strcat(ln1,sir2);
	ln=ln2+(pozitie+l);
	ln1=strcat(ln1,ln);
	strcpy(ln2,ln1);
	pozitie=strstr(ln1,sir1)-ln1;
     }
     printf("%s\n",ln2);
  } while (strlen(linie)>256);
  getch();
  return 0;
}
/* adaugati comentarii pertinente */
