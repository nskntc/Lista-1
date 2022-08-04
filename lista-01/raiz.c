double my_sqrt (double n, double err) {
    double error, r, rant;
    rant=1;
    error=r-rant*rant;
    if (error<0) error=-error;
    while (error>err) {
        r=(rant+n/rant)/2;
        error=n-r*r;
        if(error<0) error=-error;
        rant=r;
        printf("r:")
    }
    return r;
}
#include <stdio.h>
#define E 0.00001
double my_sqrt (double n, double err);
int main () {
    double r, n;
    scanf("%lf", &n);
    r=my_sqrt(n, E);
    printf("Raiz quadrada de %lf é %lf\n", n, r);
    return 0;
}