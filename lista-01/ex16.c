#include <stdio.h>
#include <math.h>

int main() {

    int n, i=0, fati, t, fat=1, c=1;
    double x, cos, cos1=0;
    scanf("%lf", &x);
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        t=(2*i);
        if (t<2) fat=1;
        for(fat = 1; t > 1; t = t - 1)
        {
            fat = fat * t;
        }
        cos=cos1+((pow((-1), i))*(pow(x, (2*i))))/fat;
        cos1=cos;
        fat=1;
    }
    printf("cos(%.2lf) = %lf\n", x, cos);
    return 0;
}