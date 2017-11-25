#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nume[30];
  char curs[40];
  int an;
} student;

int main () {
  student *stPtr,*st;

   system("cls");

   printf ("Introduceti numele studentului: ");
   scanf ("%s", stPtr->nume);
   printf("Introduceti numele cursului: ");
   scanf("%s",stPtr->curs);
   printf("Introduceti anul de studiu: ");
   scanf("%d",&stPtr->an);
   if ( (stPtr->an) < 3 )
       printf("Nu are optionale\n");
   else
       printf("Studentul %s poate alege cursul %s in anul %d\n", stPtr>nume, stPtr->curs, stPtr->an);
   st=stPtr;
   printf("Anul pentru st este %d",stPtr->an+1);
   fflush(stdin);
   getchar();
   return 0;
}
