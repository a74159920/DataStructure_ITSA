#include <stdio.h>
int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y)!=EOF){
        if(y==1){
            printf("%.1f\n", (x-80)*0.7);
        }
        else if(y==2){
            printf("%.1f\n", (x-70)*0.6);
        }
    }
    return 0;
}
