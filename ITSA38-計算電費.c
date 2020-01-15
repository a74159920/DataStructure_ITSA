#include <stdio.h>
int main()
{
    float x, non_sum=0, sum=0;
    scanf("%f", &x);
    if(x>700){
        non_sum+=(x-700)*4.5;
        sum+=(x-700)*5.63;
        x=700;
    }
    if(x>500){
        non_sum+=(x-500)*4.01;
        sum+=(x-500)*4.97;
        x=500;
    }
    if(x>330){
        non_sum+=(x-330)*3.61;
        sum+=(x-330)*4.39;
        x=330;
    }
    if(x>120){
        non_sum+=(x-120)*2.68;
        sum+=(x-120)*3.02;
        x=120;
    }
    if(x<=120){
        non_sum+=x*2.1;
        sum+=x*2.1;
    }
    printf("Summer months:%.2f\n", sum);
    printf("Non-Summer months:%.2f\n", non_sum);
}
