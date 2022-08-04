#include <stdio.h>

int main() {

    int n, i=1, j=2, k=1;
    scanf("%d", &n);
    if (n>=2) {
        while (j<=n) {
            printf("Final %d: Time%d  X Time%d\n", k, i, j);
            k++;
            j++;
            if (j>n && i<n && i>0) {
                i++;
                j=i+1;
            }
        }
    } else {
        printf("Campeonato invalido!\n");
    }
    return 0;
}