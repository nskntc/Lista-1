#include <stdio.h>

int main () {

    double a, b, c, d, t;
    scanf("%lf%lf", &a, &b);
    if(b<a) {
    t=a;
    a=b;
    b=t;
    }
    scanf("%lf", &c);
    if(c<a){
    t=c;
    c=b;
    b=a;
    a=t;
    }
    if(c<b) {
    t=c;
    c=b;
    c=t;
    }
    scanf("%lf", &d);
    if(d<a) {
    t=d;
    d=c;
    c=b;
    b=a;
    a=t;
    }
    if(d<b) {
    t=d;
    d=c;
    c=b;
    b=t;
    }
    if (d<c) {
    t=d;
    d=c;
    c=t;
    }
    printf("%.2lf, %.2lf, %.2lf, %.2lf", a, b, c, d);
    
    

    return 0;
}