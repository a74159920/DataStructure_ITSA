#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int d1, d2, d3, d4, i, sum=0, j, x;
    int num_cnt[6];     //record how many number from 1 to 6(0 to 5)
    scanf("%d", &d1);
    scanf("%d", &d2);
    scanf("%d", &d3);
    scanf("%d", &d4);
    for(i=0;i<6;i++){
        num_cnt[i]=0;   //initial
    }
    num_cnt[d1-1]++;
    num_cnt[d2-1]++;
    num_cnt[d3-1]++;
    num_cnt[d4-1]++;
    for(i=0;i<6;i++){
        //printf("%d\n", num_cnt[i]);

    }
    //if d1=d2=d3=d4
    if(d1==d2 && d2==d3 && d3==d4){
        printf("WIN\n");
    }
    else{
        for(i=0;i<6;i++){
            if(num_cnt[i]==2){
                x=i;
                if(num_cnt[i]==3){  //ignore this, I'm too lazy to delete this if-else
                        /*
                    sum+=i+1;
                    for(j=5;j>=0;j--){
                        if(num_cnt[j]!=0 && j!=x){
                            sum+=(j+1);
                        }
                    }
                    printf("%d\n", sum);
                    return 0;
                    */
                }
                else{
                    for(j=5;j>=0;j--){  //if two numbers are same, calculate the sum of the other two
                        if(num_cnt[j]!=0 && j!=x){
                            sum+=(j+1)*num_cnt[j];
                        }
                    }
                    printf("%d\n", sum);
                    return 0;
                }
            }
        }
        printf("R\n");
    }
}
