#include <stdio.h>
#include <stdlib.h>

#define NMAX 50

int main() {
  int m,n,i,j;
  float mat[NMAX][NMAX];

  system("cls");
  printf("Introduceti numarul de linii ale matricei: ");
  scanf("%d",&m);
  printf("Introduceti numarul de coloane ale matricei: ");
  scanf("%d",&n);

  printf("Introduceti valorile elementelor matricei:\n");
  for(i=0;i<m;i++)
     for(j=0;j<n;j++) {
	printf("mat[%d,%d] = ",i,j);
	scanf("%f",&mat[i][j]);
     }
  putchar('\n');
  for(i=0;i<m;i++) {
     for(j=0;j<n;j++)
       printf("%.2f ",mat[i][j]);
     putchar('\n');
  }

  /* elementele de pe si de sub diagonala principala*/
    
  printf("\n\n");
  printf("Elementele de pe si de sub diagonala principala\n");
  for(i=0;i<m;i++)
   for(j=0;j<=i;j++)
      printf("%.2f ",mat[i][j]);
  getch();

  /* elementele de pe diagonala secundara*/

  printf("\n\n");
  printf("Elementele de pe diagonala secundara\n");
  for(i=0;i<m;i++)
    printf("%.2f ",mat[i][n-1-i]);

  /* elementele de deasupra diagonalei secundare*/

  printf("\n\n");
  printf("Elementele de deasupra diagonalei secundare\n");
  for(i=0;i<m-1;i++)
    for(j=0;j<m-i-1;j++)
      printf("%.2f ",mat[i][j]);
  getch();
  return 0;
}

/* completati programul cu verificarile potrivite: pentru dimensiunile
 matricelor, daca e vorba de matrici patrate pentru actiunile legate
 de diagonale*/
