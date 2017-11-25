#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
 
/* functia de comparare pentru intregi folosita de qsort */ 
int int_cmp(const void *a, const void *b) 
{ 
    const int *ia = (const int *)a; // casting pentru tipul pointer 
    const int *ib = (const int *)b;
    return *ia  - *ib; 
	/* compararea a doi intregi: returneaza un numar negative daca b > a 
	sau pozitiv daca a > b */ 
} 
 
/* afisarea elementelor unui tablou de intregi */ 
void print_int_array(const int *array, size_t len) 
{ 
    size_t i;
 
    for(i=0; i<len; i++) 
        printf("%d | ", array[i]);
 
    putchar('\n');
} 
 
/* sortarea unor intregi cu qsort() */ 
void sort_integers_example() 
{ 
    int numbers[] = { 7, 3, 4, 1, -1, 23, 12, 43, 2, -4, 5 }; 
    size_t numbers_len = sizeof(numbers)/sizeof(int);
 
    puts("*** Sortare intregi ***");
 
    /* afisarea tabloului initial de intregi */ 
    print_int_array(numbers, numbers_len);
 
    /* sortarea tabloului cu qsort */ 
    qsort(numbers, numbers_len, sizeof(int), int_cmp);
 
    /* afisarea tabloului sortat */ 
    print_int_array(numbers, numbers_len);
} 
 
/* qsort pentru sortare siruri */ 
int cstring_cmp(const void *a, const void *b) 
{ 
    const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    return strcmp(*ia, *ib);
	
} 
 
/* afisarea sirului */ 
void print_cstring_array(char **array, size_t len) 
{ 
    size_t i;
 
    for(i=0; i<len; i++) 
        printf("%s | ", array[i]);
 
    putchar('\n');
} 
 
/* sortarea unui sir cu qsort()  */ 
void sort_cstrings_example() 
{ 
    char *strings[] = { "Vasile", "Ana", "Ted", "Mumu", "Fifi", "Castle" };
    size_t strings_len = sizeof(strings) / sizeof(char *);
 
    /** SIRURI */ 
    puts("*** Sortare siruri ***");
 
    /* Sirul initial */ 
    print_cstring_array(strings, strings_len);
 
    /* sortarea cu qsort */ 
    qsort(strings, strings_len, sizeof(char *), cstring_cmp);
 
    /* afisarea sirului sortat */ 
    print_cstring_array(strings, strings_len);
} 
 
 
 
/* exemplu de structura */ 
struct st_ex { 
    char product[16];
    float price;
};
 
/* functia pentru comparare structuri folosind qsort - campul pret - real */ 
int struct_cmp_by_price(const void *a, const void *b) 
{ 
    struct st_ex *ia = (struct st_ex *)a;
    struct st_ex *ib = (struct st_ex *)b;
    return (int)(100.f*ia->price - 100.f*ib->price);
	/* comparatie in float: returneaza negativ daca b > a 
	si pozitiv daca a > b. S-a inmultit rezultatul cu 100.0
	pentru a pastra fractia zecimala */ 
 
} 
 
/* functia pentru comparare structuri folosind qsort - campul produs - sir de caractere */ 
int struct_cmp_by_product(const void *a, const void *b) 
{ 
    struct st_ex *ia = (struct st_ex *)a;
    struct st_ex *ib = (struct st_ex *)b;
    return strcmp(ia->product, ib->product);
} 
 
/* Exemplu de afisare pentru un tablou de structuri */ 
void print_struct_array(struct st_ex *array, size_t len) 
{ 
    size_t i;
 
    for(i=0; i<len; i++) 
        printf("[ Produs: %s \t Pret: $%.2f ]\n", array[i].product, array[i].price);
 
    puts("--");
} 
 
/* sortare structuri cu qsort() */ 
void sort_structs_example(void) 
{ 
    struct st_ex structs[] = {{"mp3 player", 299.0f}, {"plasma tv", 2200.0f}, 
                              {"notebook", 1300.0f}, {"smartphone", 499.99f}, 
                              {"dvd player", 150.0f}, {"chibrit", 0.2f }};
 
    size_t structs_len = sizeof(structs) / sizeof(struct st_ex);
 
    puts("*** Sortare dupa pret * *");
 
    /* sirul initial de structuri */ 
    print_struct_array(structs, structs_len);
 
    /* sortare sir de structuri cu qsort */ 
    qsort(structs, structs_len, sizeof(struct st_ex), struct_cmp_by_price);
 
    /* afisare sir de structuri sortat */ 
    print_struct_array(structs, structs_len);
 
    puts("*** Sortare dupa produs ***");
 
    /* resortare folosind o alternativa la comparare */ 
    qsort(structs, structs_len, sizeof(struct st_ex), struct_cmp_by_product);    
 
    /* afsare structuri sortate */ 
    print_struct_array(structs, structs_len);
} 
 
 
/* functia main() - apeleaza exemplele de mai sus */ 
int main() 
{  
    sort_integers_example();
    sort_cstrings_example();
    sort_structs_example();
	getch();
    return 0;
} 
 