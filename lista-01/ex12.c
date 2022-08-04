#include <stdio.h>

int main() {

    int n, h, c1, c2;
    scanf("%d", &n);
    for (h=5; h<=n; h++) {
        for(c1=3; c1<h; c1++)
        for(c2=4; c2<h;c2++)
        if((c1*c1)+(c2*c2)==(h*h)) {
            if(c1<=c2) {
                printf("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);
            }
        }
    }
    return 0;
}
