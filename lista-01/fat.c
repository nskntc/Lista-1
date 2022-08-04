#include <stdio.h>

int main() {
    int t, c=1, fat, fati;
    scanf("%d", &t);
    if (t<2) fat=1;
    for(fat = 1; t > 1; t = t - 1)
    {
        fat = fat * t;
    }
    printf("%d", fat);
    
    return 0;
}