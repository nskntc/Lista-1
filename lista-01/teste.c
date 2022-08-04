#include <stdio.h>
    
    int main(void)
    {
        int i, n, tamMax = 0, tamCorrente = 1, elementoAnterior, elementoCorrente;
        scanf("%d", &n);
        scanf("%d", &elementoCorrente);
    for (i = 2; i <= n; i = i + 1)
    {
        elementoAnterior = elementoCorrente;
        scanf("%d", &elementoCorrente);
        if (elementoCorrente < elementoAnterior)
        {
            if (tamCorrente > tamMax) tamMax = tamCorrente;
            tamCorrente = 1;
        }
        else tamCorrente = tamCorrente + 1;
    }
    if (tamCorrente > tamMax) tamMax = tamCorrente;
    printf("O comprimento do segmento crescente maximo e: %d\n", tamMax);
    return 0;
}