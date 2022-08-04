#include <stdio.h>

int main() {

    int k, aux;
    double S=0, n;
    scanf("%lf", &n);
    aux=n;
    if (n>1 && aux==n) { 
        for (k=1; k<=n; k++) {
            S=S+1.0/k;
        }
    printf("%lf\n", S);
    } else { 
        printf("Numero invalido!\n");
    }
    
    return 0;
}