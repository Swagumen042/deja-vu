#include<stdio.h>

int func(int, int);

int main()
{
    int result1,result2;
    /* se declara un pointer la o functie care primeste 2 argumente intregi
      si returneaza un intreg */
    int (*ptrFunc) (int,int); 
 
    /* se atribuie pointerului adresa functei func */                     
    ptrFunc=func; 
 
    /* apelul functiei func prin dereferentiere explicita */
    result1 = (*ptrFunc)(10,20); 
 
    /* apelul functiei func prin dereferentiere implicita */         
    result2 = ptrFunc(10,20);               
    printf("Rezultat 1 = %d Rezultat 2 = %d\n",result1,result2);
	getch();
    return 0;
}
 
int func(int x, int y)
{
    return x+y;
}