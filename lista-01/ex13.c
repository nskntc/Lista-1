#include <stdio.h>

int main (void) {

    int n, k, x;
    scanf("%d", &n);
    for (k=1; k<=n; k++)
    {
        printf("%d*%d*%d = ", k, k, k);
        for (x=k*(k-1)+1; x<=(k-1)*(k+2)+1; x+=2)
        {
            printf("%d", x);
            if(x<(k-1)*(k+2)+1) printf("+");
        }
        printf("\n");
    }

    return 0;
}