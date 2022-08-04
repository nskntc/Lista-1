#include <stdio.h>
#include <math.h>

int main() {

double x;
int n, i;
double e=0, ex;
int t=0, fat=1;
scanf("%lf", &x);
scanf("%d", &n);
for(i=0; i<=n; i++) {
    if(i>1) fat=fat*i;
    ex=e+(pow(x, i))/fat;
    e=ex;
}
printf("e^%.2lf = %lf\n", x, ex);

    return 0;
}