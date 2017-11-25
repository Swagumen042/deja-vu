/*Intr-un cuvant (indicat printr-un pointer) se inlocuieste
un caracter cu un caracter precizat de catre utilizator */

#include<stdio.h>
#include<stdlib.h>

int main()   {
  char *s,c,d,e;
  int i=0, n=0;

  system("cls");
  printf("Scrieti cuvantul: ");
  s=(char*)malloc(sizeof(char));
  while((c=getchar())!='\n'){
    s[i++]=c;
    s=(char *)realloc(s,(i+1)*sizeof(char));
    n++;
  }
  s[i]='\0';
  
  printf("Indicati caracterul pe care doriti sa il inlocuiti: ");
  scanf("%c",&d);
  getchar();
  
  printf("Precizati caracterul cu care inlocuiti: ");
  scanf("%c",&e);
  
  for(i=0;i<n;i++)
    if(s[i]==d)
      s[i]=e;
  printf("%s\n",s);
  getch();
  return 0;
}
