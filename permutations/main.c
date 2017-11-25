#include <stdio.h>
#include <stdlib.h>

permutations(int n, int k);

int main()
{
    int n,k;
    printf("Introduceti nAk:");
    do{
        scanf("%dA%d",&n,&k);
        if (n<k)
            printf("Eroare: k > n. Introduceti nAk | k < n");
    }while(n<k);
    printf("%dA%d = %d", n, k, permutations(n,k));
    return 0;

}


permutations(int n, int k){
    int res=1, i;
    for (i = 0;i<k;i++){
        res = res * (n-i);
    }
    return res;
}
