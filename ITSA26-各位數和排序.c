#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

//calculate sum of 4 digits
int digit_sum(int num)
{
    int sum=0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int nums[n], digit[n];
    for(i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }
    //calculate sum of 4 digits for every 4-digit numbers
    for(i=0;i<n;i++){
        digit[i]=digit_sum(nums[i]);
        //printf("%d\n", digit[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(digit[j]>digit[j+1]){    //if digit sum is bigger, swap it
                swap(&digit[j], &digit[j+1]);
                swap(&nums[j], &nums[j+1]);
            }
            else if(digit[j]==digit[j+1]){  //if digit sum is equal, compare thier original numbers
                if(nums[j]>nums[j+1]){
                    swap(&digit[j], &digit[j+1]);
                    swap(&nums[j], &nums[j+1]);
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d\n", nums[i]);
        }
        else{
            printf("%d ", nums[i]);
        }
    }
}
