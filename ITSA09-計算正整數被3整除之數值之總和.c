#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int sum=0;
    for(int i=1;i<=x;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    printf("%d\n", sum);
}
