#include <stdio.h>

int main() {

    int i;
    float a, b, c, t;
    scanf("%d", &i);
    scanf("%f%f", &a, &b);
    if (b<a) {
        t=b;
        b=a;
        a=t;
    }
    scanf("%f", &c);
    if (c<a) {
        t=c;
        c=b;
        b=a;
        a=t;
    }
    if (c<b) {
        t=c;
        c=b;
        b=t;
    }
    if (i==1) printf("%.2f %.2f %.2f\n", a, b, c);
    if (i==2) printf("%.2f %.2f %.2f\n", c, b, a);
    if (i==3) printf("%.2f %.2f %.2f\n", b, c, a);
    return 0;
}