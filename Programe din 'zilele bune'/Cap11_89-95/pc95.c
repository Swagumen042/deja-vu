/*program care foloseste un tablou de pointeri care indica spre siruri de caractere; 
ordonarea sirurilor de caractere se face prin intermediul pointerilor */

#include <stdio.h>
#include <string.h>
#include <conio.h>

#define TRUE 1
#define FALSE 0
#define MAX 30     /*numar maxim de caractere in sir*/
#define LUNG 51    /*lungimea tabloului + NULL*/

void sortnum(char *num[], int n);

int main()   {
	int i,n;
	char nume[MAX][LUNG]; /*tablou de 30 de linii cu lungimea maxima 50)*/
	char *tabPtr[MAX];    /*tablou de 30 de pointeri care arata spre nume*/

	printf("Sortare nume folosind tablouri de pointeri\n");
	printf("Se introduce un nume pe linie, terminand cu EOF\n");
	for (n=0; gets(nume[n]) && n<MAX;n++)
		tabPtr[n]=nume[n];
	if (n==MAX)
		printf("Sunt permise doar %d nume", MAX);
	printf("Numele nesortate sunt:\n");
	for (i=0;i<n;i++)
		puts(nume[i]);		/*nume prin siruri*/
	sortnum(tabPtr,n);
	printf("Numele sortate sunt:\n");
	for(i=0;i<n;i++)
		puts(tabPtr[i]);	/*nume prin pointeri*/
	getch();
	return 0;
}

void sortnum(char *numP[],int k) /* tablou de k pointeri */
{
	int i, dim,maxpoz=0;
	char *aux;

	for (dim=k;dim>1;dim--)   {
		for(i=0;i<dim;i++)
			if(strcmp(numP[i],numP[maxpoz])>0) /* sortare cu strcmp al continutului indicat prin pointeri */
				maxpoz=i;
		aux=numP[maxpoz];
		numP[maxpoz]=numP[dim-1];
		numP[dim-1]=aux;
	}
}
