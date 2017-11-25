/* Programul citeste un sir de intregi pe o linie, iar apoi extrage si afiseaza
cifrele de e pozitii pare si cele impare in 2 pointeri diferiti */

#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int main()	{
  char*l,*a,*b,c;
  int i=0,j=0,m=0,k=0,n=0;
  l=(char*)malloc(sizeof(char));
  a=(char*)malloc(sizeof(char));
  b=(char*)malloc(sizeof(char));
  
  printf("Introduceti sirul de intregi: ");
  while((c=getchar())!='\n') {  
	   l[i++]= c;
	   l=(char*)realloc(l,(i+1)*sizeof(char));
  }
  l[i]='\0';
  
  for(j=0;j<i;j++)
    if(( j % 2) == 0)   {
      a[k++]=l[j];
      a=(char*)realloc(a,(k+1)*sizeof(char));
    }
    else {
	b[m++]=l[j];
	b=(char*)realloc(b,(m+1)*sizeof(char));
    }
  for(i=0;i<k;i++)
    printf("%c",a[i]);
  printf("\n");
  for(i=0;i<m;i++)
     printf("%c",b[i]);
  printf("\n");
  getch();
  return 0;
}
