#include<stdio.h> 

int main()   {
    char *p1 = "luni";
    char *p2 = "marti";
    char *p3 = "miercuri"; 

    char *tab[3]; 

    tab[0] = p1;
    tab[1] = p2;
    tab[2] = p3; 

   printf("\n p1 = %s \n",p1);
   printf("\n p2 = %s \n",p2);
   printf("\n p3 = %s \n",p3); 

   printf("\n tab[0] = %s \n",tab[0]);
   printf("\n tab[1] = %s \n",tab[1]);
   printf("\n tab[2] = %s \n",tab[2]); 
   getch();

   return 0;
}