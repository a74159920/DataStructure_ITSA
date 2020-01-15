#include  <stdio.h>
int main()
{
    int a, b;
    int x, y;
    int c, d;
    int e;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &y);
    /* if end's minute < start's minutes */
    if(y-b<0){
        y+=60;
        x-=1;
    }
    c=y-b;      //hours
    d=x-a;      //minutes
    e = d*60 + c;   //e = total minutes
    e/=30;          //e = total half hour
    //printf("%d %d %d %d %d %d %d", a, b, x, y, c, d, e);
    if(d<2){    //if less than two hours
        printf("%d\n", e*30);   //$30/half hours
    }
    else if(d>=2 && d<4){   //if more than two hours but less than 4 hours
        e-=4;               //exceed half hours
        printf("%d\n", e*40+4*30);  // $40/exceed half hours
    }
    else if(d>=4){          //if more than 4 hours
        e-=8;               //exceed half hours
        printf("%d\n", e*60+120+160); // $60/exceed half hours
    }
}
