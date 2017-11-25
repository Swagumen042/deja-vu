/*programul prelucreaza un text numarand cuvintele si propozitiile
din care este alcatuit; textul se termina cu caracterul #.Cuvintele
sunt alcatuite numai din litere,fiind despartite prin orice alt
caracter diferit de litera.O propozitie are cel putin un cuvant si
se termina cu punct.La inceputul propozitiilor se neglijeaza
orice alt caracter in afara de litera si #*/

#include <stdio.h>
#include <stdlib.h>

int nrc,nrp;
int stare;
char ch;

int main()   {
  system("cls");
  nrc=0;
  nrp=0;
  stare=0;

  printf("Introduceti propozitii:\n");
  do  {
    do  {
      scanf("%c",&ch);
      ch=toupper(ch);
      if ((ch=='.') && stare) {
	nrp=nrp+1;
	stare=0;
	scanf("%c",&ch);
	ch=toupper(ch);
      }
    } while (((ch<'A') || (ch>'Z')) && (ch!='#'));
    if (ch!='#')  {
       stare=1;
       do {
	  scanf("%c",&ch);
	  ch=toupper(ch);
       } while((ch>='A') && (ch<='Z'));
       nrc++;
       if (ch=='.') {
	 nrp++;
	 stare=0;
	 scanf("%c",&ch);
	 ch=toupper(ch);
       }
    }
  } while(ch!='#');

  printf("Textul este alcatuit din %d propozitii\n",nrp);
  printf("Numarul total al cuvintelor este %d",nrc);
  getch();
  return 0;
}
/* adaugati comentarii sugestive */