#include <stdio.h>
#include <stdlib.h>

power(int n, int k);

int main()
{
    int n, k;
    printf("Introduceti nr (n^k): ");
    scanf("%d^%d", &n, &k);
    printf("%d^%d = %d", n, k, power(n,k));
    return 0;
}

power(int n, int k){
    int p;
    if (k == 0)
        return 1;
    p = power(n, k/2);
    if (!(k%2))
        return p*p;
    else
        return n*p*p;
}
