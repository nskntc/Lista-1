#include <stdio.h>

int main() {

    int t, i, a, b, ca, da, ua, cb, db, ub, a2, b2;
    scanf("%d", &t);
    for (i=1; i<=t; i++) {
        scanf("%d %d", &a, &b);
        ca=a/100;
        ua=a%10;
        da=(a%100)-ua;
        a2=(ua*100)+da+ca;
        cb=b/100;
        ub=b%10;
        db=(b%100)-ub;
        b2=(ub*100)+db+cb;
        if(a2>b2) printf("%d\n", a2);
        else printf("%d\n", b2);
        
    }

    return 0;
}