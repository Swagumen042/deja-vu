#include <stdio.h>
#include <stdlib.h>

int main() {
  int g;
  char s1[10]="aaab";
  char s2[10]="aab";
  char persoana[30]="";
  char *p="Ion";
  char *n="Ionescu";
  char *b=" ";

  system("cls");
  if ("aaab" <= "aab")
    printf ("adevarat\n");
  else
    printf("fals\n");
  g=strcmp(s1,s2);
  if (g<0)
    printf("s1 e mai mic decit s2");
  else if (g==0) printf ("s1 egal s2");
       else printf("s1 mai mare decit s2");
  putchar('\n');
  printf ("Lungimea sirului este %d\n",strlen(s1));
  strcat(persoana,p);
  strcat(persoana,b);
  strcat(persoana,n);
  printf("%s\n",persoana);
  getch();
  return 0;
}