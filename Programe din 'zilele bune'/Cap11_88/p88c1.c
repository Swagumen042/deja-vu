#include<stdio.h>
 
/* prototip functie */
int func(int, int);

int main()
{
    int result;

    /* apelul functiei func */
    result = func(10,20);       
    printf("Rezultat = %d\n",result);
	getch();
    return 0;
}
 
/* Definitia functiei func */
int func(int x, int y)             
{
return x+y;
}