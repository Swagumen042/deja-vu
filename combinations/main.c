#include <stdio.h>
#include <stdlib.h>

factorial(int n){
    if(n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
   int n,k;
   printf("Introduceti nAk: (Combinari de n luate cate k): ");
   do{
        scanf("%dC%d", &n, &k);
        if(n<k)
            printf("Eroare: k > n. Introduceti nCk | k < n: ");
   }while(n<k);
   printf("%dC%d = %d", n, k, (factorial(n)/(factorial(n-k)*factorial(k))));
   return 0;
}
