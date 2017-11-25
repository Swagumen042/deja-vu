/************************************************************************
 *
 * Obiectiv: Crearea unui tabel de structuri
 * Autor:    Grigore
 * Data:     21 Noiembrie 2012
 *
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct scriitor {	/* declararea structurii*/
  char nume[25];
  int varsta;
};

int main () {
  int i=0;                                    /*initilizari*/
  struct scriitor s[]= {
    {"Anna Gavalda", 42},
    {"Michel Houellebecq", 54},
    {"Kazuo Ishiguro", 58},
    {"Stephenie Meyer",39},
    {"EOF", -1}
  };

  system("cls");
  while( s[i].varsta != -1) {		/*tiparirea continutului elementelor structurii*/
    printf("\n");
    printf("Numele este %s \t\tvarsta este %d \n", s[i].nume, s[i].varsta);
    i++;
  }
  getchar();
  return 0;
}

/************************************************************************
 *
 * Programul va avea ca rezultat:
 *
 * Numele este Anna Gavalda 		varsta este 39
 * Numele este Michel Houellebecq	varsta este 51
 * Numele este Kazuo Ishiguro 		varsat este 55
 * Numele este Isabel Allende		varsta este 36
 *
 *************************************************************************/