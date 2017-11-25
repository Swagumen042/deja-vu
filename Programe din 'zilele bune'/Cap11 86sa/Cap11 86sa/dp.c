#include <stdio.h>
#include <malloc.h>

int main ()   {
	int *c;
	char *m;

	c = (int*) malloc(sizeof(int));
	free(c);
	
	m = (char*) malloc(sizeof(char));
	*c = 3; 
	*m='a';
	
	printf("%d", *c);
	free(m);

	getch();
	return 0;
}