#include <stdio.h>

int b1, b2, b3, b4;
int a1, a2, a3, a4;

void get_digit(int num)
{
    a4=num%10;
    num/=10;
    a3=num%10;
    num/=10;
    a2=num%10;
    num/=10;
    a1=num%10;
    num/=10;
}

void get_digit2(int num)
{
    b4=num%10;
    num/=10;
    b3=num%10;
    num/=10;
    b2=num%10;
    num/=10;
    b1=num%10;
    num/=10;
}

int main()
{
    int ans, x, acnt=0, bcnt=0;
    scanf("%d", &ans);
    get_digit(ans);         //get answers' four digits
    while(scanf("%d", &x)!=EOF){
        acnt=0, bcnt=0;
        if(x==0){
            return 0;
        }
        get_digit2(x);      //get the guess' four digits
        //printf("%d %d %d %d\n", a1, a2, a3, a4);
        //printf("%d %d %d %d\n", b1, b2, b3, b4);
        if(a1==b1){
            acnt++;
        }
        if(a2==b2){
            acnt++;
        }
        if(a3==b3){
            acnt++;
        }
        if(a4==b4){
            acnt++;
        }
        if(b1==a2 || b1==a3 || b1==a4){
            bcnt++;
        }
        if(b2==a1 || b2==a3 || b2==a4){
            bcnt++;
        }
        if(b3==a1 || b3==a2 || b3==a4){
            bcnt++;
        }
        if(b4==a1 || b4==a2 || b4==a3){
            bcnt++;
        }
        printf("%dA%dB\n", acnt, bcnt);
    }
}

