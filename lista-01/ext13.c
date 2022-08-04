#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, delta;
    double x1, x2;
    scanf("%d %d %d", &a, &b, &c);
    delta = (b*b) - (4*a*c);
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    if (delta<0) {printf("POSICOES IMAGINARIAS");
    return 0;
    }
    else {printf("POSICOES: X1=%.2lf e X2=%.2lf", x1, x2);
        if (x1>5 || x1<(-5) || x2>5 || x2<(-5)) printf(" (FORA DO EXPERIMENTO)");
        if ((a+b+c)%3==0) printf("\nFATO1: DESAPARECIDA");
        if ((c%2)==0 && c<(a+b)) printf("\nFATO2: ORIGEM");
    }

    return 0;
}