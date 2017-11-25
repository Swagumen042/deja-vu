#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nume[30];
  char curs[40];
  int an;
} student;

int main () {
  student student_nou,st;

  system("cls");
  printf ("Introduceti numele studentului: ");
  scanf ("%s", student_nou.nume);
  printf("Introduceti numele cursului: ");
  scanf("%s",student_nou.curs);
  printf("Introduceti anul de studiu: ");
  scanf("%d",&student_nou.an);
  if (student_nou.an <3)
    printf("Nu are optionale\n");
  else
    printf("Studentul %s poate alege cursul %s in anul %d\n", student_nou.nume, student_nou.curs, student_nou.an);
  st=student_nou;
  printf("Anul pentru st este %d",st.an+1);
  fflush(stdin);
  getchar();
  return 0;
}
