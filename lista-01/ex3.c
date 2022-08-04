#include <stdio.h>

int main() {
    int x, y, i;
    scanf("%d%d", &x, &y);
    if (x%2==0) {
        while(y>1) {
            printf("%d ",x);
            x=x+2;
            y--;
        }
        while(y==1) {
            printf("%d\n", x);
            y--;
        }
        
    } else {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return 0;
}