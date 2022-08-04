#include <stdio.h>

int main() {
    int n1, n2, n3, N, N2=0;
    scanf("%d", &N);
    n1=N/100;
    n2=(N%100)/10;
    n3=(N%100)%10;
    N2=n3*100+n2*10+n1;
    printf("%d\n", N2);
    return 0;


}