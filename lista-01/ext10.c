#include <stdio.h>

int main() {

    int n1, n2, n3, A, B, C;
    char x, y, z;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c %c %c", &x, &y, &z);
    if (n1<n2 && n1<n3) A=n1;
    else if (n2<n1 && n2<n3) A=n2;
    else A=n3;
    if (n1>n2 && n1<n3) B=n1;
    else if (n1<n2 && n1>n3) B=n1;
    else if (n2<n1 && n2>n3) B=n2;
    else if (n2>n1 && n2<n3) B=n2;
    else if (n3>n1 && n3<n2) B=n3;
    else B=n3;
    if (n1>n2 && n1>n3) C=n1;
    else if (n2>n1 && n2>n3) C=n2;
    else C=n3;
    if (x==65 && y==66 && z==67) printf("%d %d %d", A, B, C);
    else if (x==65 && y==67 && z==66) printf("%d %d %d", A, C, B);
    else if (x==66 && y==65 && z==67) printf("%d %d %d", B, A, C);
    else if (x==66 && y==67 && z==65) printf("%d %d %d", B, C, A);
    else if (x==67 && y==65 && z==66) printf("%d %d %d", C, A, B);
    else printf("%d %d %d", C, B, A);

    return 0;
}