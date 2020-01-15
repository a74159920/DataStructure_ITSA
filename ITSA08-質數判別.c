#include <stdio.h>
int main()
{
    int x;
    int flag = 1;
    scanf("%d", &x);
    if(x==1){
        printf("NO\n");
    }
    else if(x==2){
        printf("YES\n");
    }
    else{
        for(int i=x/2;i>1;i--){
            if(x%i==0){
                printf("NO\n");
                return 0;
            }

        }
        printf("YES\n");
    }
}
