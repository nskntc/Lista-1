#include <stdio.h>

int main() {

    double a, b, c, d, D;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    D=a*d-b*c;
    printf("O VALOR DO DETERMINANTE E = %.2lf\n", D);

    return 0;
}