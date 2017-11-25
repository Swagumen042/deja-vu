#include <stdio.h>
#include <stdlib.h> //atoi - ia un sir de caractere si il transforma in intreg daca caracterele sale sunt numerice.
#include <ctype.h> // isdigit - verificam daca este sir numai din caractere numerice
//
//  Sa se scrie un program care ia un numar cu mai mult de 2 cifre de la tastatura,
//  pana la INT_MAX = 2147483647 sau INT_MIN = -2147483648
//  omite cifra cea mai semnificativa si afiseaza numarul obtinut.
//  Sa NU se foloseasca biblioteca "string.h" (ca na, trebuie sa facem totul mai
//  complicat decat ar trebui sa fie.)
//
//  Bineinteles ca si asta e mai complicat decat trebuie sa fie, poti scrie un program
//  care sa numere cate cifre are numarul, sa salveze valoarea celei mai semnificative
//  si sa scada cifra*(10^(pozitia_cifrei-1)), si functioneaza si pentru numere negative.
//  dar aia va las pe voi sa faceti :)

int mystrlength(char *str);

int main()
{
    char *nr;
    int new_nr;
    nr = malloc(sizeof(char)); // hello malloc my old friend
    printf("Introduceti numarul: ");
    do{
        fgets(nr, 13, stdin); //10 cifre pt numar, 1 pt '-' 1 pt '\n' si 1 pt '\0' - in C, orice sir de caractere se incheie cu '\0'

        if(mystrlength(nr)<3 || !checkvalid(nr)){
            if(!checkvalid(nr)){
                printf("Stiam eu ca o sa fie un destept...\n");
            }
            printf("Introduceti un numar care respecta cerinta si nu contine decat caractere numerice: ");
        }
        // ar trebui sa fac si verificare in caz de se introduce n: n < INT_MIN sau n > INT_MAX, dar fara functia strcmp ia mult :)
    }while(mystrlength(nr)<3 || !checkvalid(nr));
    if(*nr == '-'){
        new_nr = (atoi(nr+2) * -1); // sarim peste primele doua "simboluri" din sirul introdus( primul este - iar al doilea este prima cifra)
    }                               // il transformam in intreg si inmultim cu -1 ca sa avem numar negativ din nou.
    else{
        new_nr = atoi(nr+1);        // in cazul acesta nu avem minus, asa ca sarim doar peste prima cifra.
    }
    printf("%d", new_nr);
    return 0; // da cum.

}

int mystrlength(char *str){
    int length;
    length = 0;
    if (*str == '-'){
        length = -1; // daca vede Neagul asta ma omoara, dar macar merge.
    }
    while(*str++ != '\n'){  //verificam pana la new line deoarece functia fgets ia si \n ca si caracter de intrare
        length++;           // de obicei acesta se sterge dar mie mi-e lene.
    }
    return length;
}

int checkvalid(char *str){  //cu asta prindem desteptii.
    if(!(isdigit(*str))){
        return 0;
    }
    if(*str == '0'){
        return 0;
    }
    if(*str == '-'){
        *str++;
    }
    while(*str++ != '\n'){
        if(!(isdigit(*str))){
            return 0;
            break;
    }
        else
            return 1;
    }
}
