#include <stdio.h>
int func(int n)
{
    if(n==0 || n==1){
        n++;
        return n;
    }
    else if(n>1){
        return func(n-1) + func(n/2);
    }
}

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d\n", func(x));
}
