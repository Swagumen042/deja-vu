#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])  {
	while(argc--)
	   printf("%s\n", *argv++);
	   getch();
	exit(EXIT_SUCCESS);
}