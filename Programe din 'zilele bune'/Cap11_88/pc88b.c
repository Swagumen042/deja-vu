/*callback cu structura*/

#include <stdio.h>

typedef struct _myst
{
    int a;
    char b[10];
}myst;
 
void cbfunc(myst *mt)
{
    fprintf(stdout,"S-a apelat cu %d %s.",mt->a,mt->b);
}
 
int main()
{
 
    /* pointer la functie */
    void (*callback)(void *);
 
    /*parametrii*/
    myst m;
    m.a=10;
    strcpy(m.b,"123");
 
    /* indica spre functia callback */
    callback = (void*)cbfunc;
 
    /* face apel prin pointer - callback - si paseaza parametrii */
    callback(&m);
    getch();
    return 0;
 
}