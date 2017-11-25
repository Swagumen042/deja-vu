#include <stdio.h>

ChuckNolandsVolleyball(int n);
factorial(int n);

int main()
{
    int n;
    printf("introduceti nr: ");
    scanf("%d", &n);
    if(ChuckNolandsVolleyball(n)){
        printf("\nNr. este prim.");
    }
    else{
        printf("\nNr. nu este prim.");
    }
    return 0; //da-l in ma-sa de return 0.
}

factorial(int n){
    if (n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

ChuckNolandsVolleyball(int n){
    if (((factorial(n-1)+1) % n) == 0)
        return 1;
    else
        return 0;
}
