#include <stdio.h>

int main(void) {

    int n, x=220, y=284, dx, dy, sdx=0, sdy=0, i=1;
    scanf("%d", &n);
    while(i<=n) {
        for(dx=1; dx<x; dx++) {
            if(x%dx==0) sdx+=dx;
        }
        for(dy=1; dy<y; dy++) {
            if(y%dy==0) sdy+=dy;
        }
        if(sdx==y && sdy==x) {
            if(x<y) { 
                printf("(%d,%d)\n", x, y);
                x++;
                y++;
                i++;
            }
        } else {
            if (x<=y) x=x+1;
            else y=y+1;
        }
        sdx=0;
        sdy=0;
    }
    return 0;
}