/* Se citeste caracter cu caracter un text introdus de la tastatura
care se termina cu '#'. Se vor afisa
toate literele care apar o singura data in text si separat cele care apar de
mai multe ori.Nu se face diferenta intre literele  mari si mici,iar alte
caractere in afara de literele mari si mici si '#' se neglijeaza*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
  char c;
  char cunu[28],cvar[28];
  int i;

  system("cls");
  for(i=0;i<28;i++) {
    cunu[i]=0;
    cvar[i]=0;
  }
  printf("Textul este (se termina cu caracterul '#'): ");
  while((c=getchar()) != '#') {
    if((c >= 'a') && (c <= 'z'))
       c += ('A'-'a');
    if((c >= 'A') && (c <= 'Z')) {
      if(cunu[c-'A'] && !cvar[c-'A']) {
	 cvar[c-'A']=1;
	 cunu[c-'A']=0;
      }
      else
	 if(!cunu[c-'A'] && !cvar[c-'A'])
	      cunu[c-'A']=1;
    }
  }
  printf("Literele care apar o singura data sunt: ");
  for(i=0;i<28;i++)
    if(cunu[i])
      printf("%c ",'A'+i);
  putchar('\n');
  printf("Literele care apar de mai multe ori sunt : ");
  for(i=0;i<28;i++)
    if(cvar[i])
      printf("%c ",'A'+i);
  putchar('\n');
  getch();
  return 0;
}
