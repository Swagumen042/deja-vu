# include<stdio.h> 

int main()   {
    char **ptr = NULL; 

    char *p = NULL; 

    char c = 'd'; 

    p = &c;
    ptr = &p; 

    printf(" c = [%c] ",c);
    printf(" *p = [%c] ",*p);
    printf(" **ptr = [%c] ",**ptr); 
	getch();
    return 0;
}