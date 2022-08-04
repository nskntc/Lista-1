#include <stdio.h>

int main () {

    double n1, n2, n3, i;
    scanf("%lf%lf", &n1, &n2);
    if (n2<n1) {
        i=n1;
        n1=n2;
        n2=i;
    }
    scanf("%lf", &n3);
    if (n3<n1) {
        i=n3;
        n3=n2;
        n2=n1;
        n1=i;
    }
    if (n3<n2) {
        i=n3;
        n3=n2;
        n2=i;        
    }
    printf("%.2lf, %.2lf, %.2lf", n1, n2, n3);


    
    return 0;
}