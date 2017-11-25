#include <stdio.h>

cmmdc(int a, int b);

int main(){
    int a, b, c, d;
    printf("Introduceti fractiile(semnul '\\' desparte termenii,\niar fractiile sunt despartite de un spatiu): ");
    do{
    scanf("%d/%d %d/%d", &a,&b,&c,&d);
    if(!(b && d)){
        printf("Eroare, nu se poate impartii la zero. Baga altu' bo$$");
    }
    }while(!(b && d));
    if(b==d)
    {
        printf("Suma fractiilor este: %d/%d, iar produsul lor este %d/%d \n", a+c, b, a*c, b*d);
           if(cmmdc((a+c), b) != 1){
            printf("Suma simplificata are forma %d/%d\n", ((a+c)/cmmdc((a+c), b)), (b/cmmdc((a+c), b)));
           }
           if(cmmdc((a*c), (b*d)) != 1){
            printf("Produsul simplificat are forma %d/%d\n", ((a*c)/cmmdc((a*c), (b*d))), ((b*d)/cmmdc((a*c), (b*d))));
           }
    }
    else{
        printf("Suma fractiilor este: %d/%d, iar produsul lor este %d/%d \n", (a*d)+(c*b), b*d, a*c, b*d);
            if(cmmdc((a*d)+(c*b), b*d) != 1){
            printf("Suma simplificata are forma: %d/%d\n",((a*d)+(c*b))/(cmmdc((a*d)+(c*b), b*d)), b*d/(cmmdc((a*d)+(c*b), b*d)));
            }
            if(cmmdc(a*c, b*d) != 1){
            printf("Produsul simplificat are forma: %d/%d\n", a*c/cmmdc(a*c, b*d), b*d/cmmdc(a*c, b*d));
            }
    }

    return 0;
}

cmmdc(int a, int b){
    int aux, rez;
    if(a < b){
        aux = a;
        a = b;
        b = aux;
    }
    if (b == 0)
        return a;
    else
        rez = cmmdc(b, (a%b));
    return rez;
}
