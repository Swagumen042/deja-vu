#include <stdio.h>

int main() {
int operator_invalid;
char operator;
float nr1,nr2,rez;

     operator_invalid=0;
     printf("Tastati doua numere reale in formatul\n");
     printf("numar1  operator  numar2\n");
     scanf("%f %c %f",&nr1,&operator,&nr2);
     switch(operator) {
	  case '*': {
	    rez=nr1*nr2;
	    break;
	  }
	  case '/': {
	    rez=nr1/nr2;
	    break;
	  }
	  case '+': {
	    rez=nr1+nr2;
	    break;
	  }
	  case '-': {
	    rez=nr1-nr2;
	    break;
	  }
	  default: operator_invalid=1;
     }
     if(operator_invalid)
       printf("Operator invalid!\n");
     else
       printf("%.3f %c %.3f este egal cu %.3f\n",nr1,operator,nr2,rez);
	 getch();
     return 0;
}
