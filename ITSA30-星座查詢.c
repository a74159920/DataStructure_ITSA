#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(x==1){
        if(y>=21){
            printf("Aquarius\n");
        }
        else{
            printf("Capricorn\n");
        }
    }
    else if(x==2){
        if(y>=19){
            printf("Pisces\n");
        }
        else{
            printf("Aquarius\n");
        }
    }
    else if(x==3){
        if(y>=21){
            printf("Aries\n");
        }
        else{
            printf("Pisces\n");
        }
    }
    else if(x==4){
        if(y>=21){
            printf("Taurus\n");
        }
        else{
            printf("Aries\n");
        }
    }
    else if(x==5){
        if(y>=22){
            printf("Gemini\n");
        }
        else{
            printf("Taurus\n");
        }
    }
    else if(x==6){
        if(y>=22){
            printf("Cancer\n");
        }
        else{
            printf("Gemini\n");
        }
    }
    else if(x==7){
        if(y>=23){
            printf("Leo\n");
        }
        else{
            printf("Cancer\n");
        }
    }
    else if(x==8){
        if(y>=24){
            printf("Virgo\n");
        }
        else{
            printf("Leo\n");
        }
    }
    else if(x==9){
        if(y>=24){
            printf("Libra\n");
        }
        else{
            printf("Virgo\n");
        }
    }
    else if(x==10){
        if(y>=24){
            printf("Scorpio\n");
        }
        else{
            printf("Libra\n");
        }
    }
    else if(x==11){
        if(y>=23){
            printf("Sagittarius\n");
        }
        else{
            printf("Scorpio\n");
        }
    }
    else if(x==12){
        if(y>=22){
            printf("Capricorn\n");
        }
        else{
            printf("Sagittarius\n");
        }
    }
}
