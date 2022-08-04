#include <stdio.h>

int main () {

    int dec, b0, b1, b2, b3, b4, b5, b6, b7;
    scanf("%d", &dec);
    if (dec<0 || dec>255) {
        printf("Numero invalido!\n");
    } else {
        b0=dec%2;
        b1=(dec/2)%2;
        b2=(dec/4)%2;
        b3=(dec/8)%2;
        b4=(dec/16)%2;
        b5=(dec/32)%2;
        b6=(dec/64)%2;
        b7=(dec/128)%2;
        printf("%d%d%d%d%d%d%d%d\n", b7, b6, b5, b4, b3, b2, b1, b0);
    }

    return 0;
}