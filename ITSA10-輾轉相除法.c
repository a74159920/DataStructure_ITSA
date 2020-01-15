#include <stdio.h>

int main(void)
{
    int x, y, tmp, gcd, mod;
    scanf("%d %d", &x, &y);
    //if x<y swap x, y
    if(x<y){
        tmp=x;
        x=y;
        y=tmp;
    }
    /* Euclidean algorithm */
    mod=x%y;
    while(mod!=0){
        x=y;
        y=mod;
        mod=x%y;
        //printf("%d %d", x, y);
    }
    printf("%d\n", y);
}
