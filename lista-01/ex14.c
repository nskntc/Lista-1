#include <stdio.h>

int main() {

    int n, d=1, i, n2=1;
    scanf("%d", &n);
    printf("%d = %d", n, d);
    for(i=2; i<n; i++) {
        if(n%i==0) { 
            printf(" + %d", i);
            n2+=i;
        }
    }
    if(n2==n) printf(" = %d (NUMERO PERFEITO)\n", n2);
    else printf(" = %d  (NUMERO NAO E PERFEITO)\n", n2);
    return 0;
}