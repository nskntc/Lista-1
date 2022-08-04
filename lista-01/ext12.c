#include <stdio.h>

int main () {

    double s;
    int f, e, r;
    scanf("%lf %d %d %d", &s, &f, &e, &r);
    if (e==1) printf("ALUNO NAO COTISTA");
    else if (s/f<=1405.5 && r==4) printf("ALUNO COTISTA (L1)");
    else if (s/f<=1405.5 && r!=4) printf("ALUNO COTISTA (L2)");
    else if (e==2 && s/f>1405.5 && r==4) printf("ALUNO COTISTA (L3)");
    else printf("ALUNO COTISTA (L4)");

    return 0;
}