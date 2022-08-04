#include <stdio.h>

int main() {

    float F, C, P, m;
    scanf("%f%f", &F, &P);
    C = 5*(F-32)/9;
    m = 25.4*P;
    printf("O VALOR EM CELSIUS = %0.2f\nA QUANTIDADE DE CHUVA E = %0.2f\n", C, m);

    return 0;
}