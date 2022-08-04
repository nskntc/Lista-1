#include <stdio.h>

int main (void) {
    int n;
    int p=2, r=0, i, primo;
    scanf("%d", &n);
    while(n<=1) { 
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        scanf("%d", &n);
    } if(n>1) {
        printf("%d = ", n);
        while(n>1) {
            if(n%p!=0) { 
                p++;
            }
            for (i=2; i<=p/2; i++) {
                if (p%i==0) {
                    r++;
                }
            }
            if (n%p==0 && r==0) {
                n=n/p;
                primo=p;
                printf("%d", primo);
                if (n>1) printf(" x ");
            }
            r=0;
        }
    }
    printf("\n");
    return 0;
}