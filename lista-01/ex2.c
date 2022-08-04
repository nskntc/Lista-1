#include <stdio.h>

int main() {

    int N, i, n2;
    scanf("%d", &N);
    if (N>5 && N<2000) { 
        for (i=2; i<=N; i=i+2) {
        n2=i*i;
        printf("%d^2 = %d\n", i, n2);
    }
    }

    return 0;
}