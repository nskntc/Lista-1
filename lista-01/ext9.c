#include <stdio.h>

int main () {

    int a, b, c, d, e, N, invN;
    scanf("%d", &N);
    if (N>99999)  {printf("NUMERO INVALIDO\n");
    } else {a=N/10000;
            b=(N%10000)/1000;
            c=(N%1000)/100;
            d=(N%100)/10;
            e=(N%10);
            invN=e*10000+d*1000+c*100+b*10+a;
            if (a==0) invN=e*1000+d*100+c*10+b;
            if (a==0 && b==0) invN=e*100+d*10+c;
            if (a==0 && b==0 && c==0) invN=e*10+d;
            if (a==0 && b==0 && c==0 && d==0) invN=e;
            if (N==invN) printf("PALINDROMO\n");
            if (N!=invN) printf("NAO PALINDROMO\n");
    }
    return 0;
}