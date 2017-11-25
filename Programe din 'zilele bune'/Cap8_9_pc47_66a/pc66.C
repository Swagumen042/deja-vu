/*Aplicatie pentru tipuri definite de utilizator - enumerare*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {manevra,ianuarie,februarie,martie,aprilie,mai,iunie,
	     iulie,august,septembrie,octombrie,noiembrie,decembrie} lunile;

int an;
int nr_zi,lu,zi;
char ch;

lunile luna,lunaprec;

int main() {
  system("cls");
  printf("Determinarea numarului zilei in an pentru o data calendaristica:\n");
  do  {
    printf("Introduceti data:ziua(1-31),luna(1-12),an(intreg): ");
    scanf("%d%d%d",&zi,&lu,&an);
    printf("Data: %d ",zi);
    switch(lu)  {
      case 1: lunaprec=manevra;
	      printf("ianuarie ");break;
      case 2: lunaprec=ianuarie;
	      printf("februarie ");break;
      case 3: lunaprec=februarie;
	      printf("martie ");break;
      case 4: lunaprec=martie;
	      printf("aprilie ");break;
      case 5: lunaprec=aprilie;
	      printf("mai ");break;
      case 6: lunaprec=mai;
	      printf("iunie ");break;
      case 7: lunaprec=iunie;
	      printf("iulie ");break;
      case 8: lunaprec=iulie;
	      printf("august ");break;
      case 9: lunaprec=august;
	      printf("septembrie ");break;
      case 10:lunaprec=septembrie;
	      printf("octombrie ");break;
      case 11:lunaprec=octombrie;
	      printf("noiembrie ");break;
      case 12:lunaprec=noiembrie;
	      printf("decembrie ");break;
    }
    printf("%d  ",an);
    nr_zi=zi;
    for(luna=ianuarie;luna<=lunaprec;luna++)
    switch(luna)  {
      case ianuarie:case martie:case mai:case iulie:case august:case octombrie:
      nr_zi=nr_zi+31;break;
      case aprilie:case iunie:case septembrie:case noiembrie:nr_zi=nr_zi+30;break;
      case februarie:if (an%4==0) nr_zi=nr_zi+29;
      else nr_zi=nr_zi+28;
    }
    printf("este a %d -a zi din an.\n",nr_zi);
    printf("Continuati? (d/n)");
    scanf("%1s",&ch);
  } while (ch!='n');
  return 0;
}


/* faceti verficarile in asa fel incit sa nu
poata fi depasite limitele pentru zi, luna, an)
si daca e vorba de prima zi din an sa scrie corect,
nu a 1-a zi...*/