#include  <stdio.h>
int main()
{
    int x, y, negative=0, cnt1=0, cnt2=7, i;
    scanf("%d", &x);
    /* for first digit, print 1 if negative else 0 */
    if(x>=0){
        printf("0");
    }
    else{
        printf("1");
    }
    /* if negative, treat it as its opposite number -1 */
    if(x<0){
        negative=1;
        x=-x;
        x--;
    }
    /* count how many digits  */
    y=x;
    while(y/2!=0 ||y==1){     //eg: 4  00000100 ->  00000(103) -> cnt1=3
        cnt1++;
        y/=2;
    }
    //printf("\n%d\n", cnt1);
    /* cnt2 :the amount of remain digits(default:7) */
    cnt2-=cnt1;                 //eg: 4 00000100 -> 0(0000)100 -> cnt2 = 7-3 = 4
    //printf("%d\n", cnt2);
    /* fill 1 if x is negative else 0, repeat cnt2 times */
    if(negative){
        for(i=0;i<cnt2;i++){
            printf("1");
        }
    }
    else{
        for(i=0;i<cnt2;i++){
            printf("0");
        }
    }
    int arr[cnt1];
    i=0;
    /* x mod 2, save the result in array, x/=2 */
    while(x/2!=0 ||x==1){
        //printf("%d\n", x%2);
        arr[i]=x%2;
        i++;
        x/=2;
    }
    /* reverse the result */
    for(i=cnt1-1;i>=0;i--){
        if(negative){
           printf("%d", !arr[i]);
        }
        else{
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}
