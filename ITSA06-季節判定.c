#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x>=3 && x<=5){
        printf("Spring\n");
    }
    else if(x>=6 && x<=8){
        printf("Summer\n");
    }
    else if(x>=9 && x<=11){
        printf("Autumn\n");
    }
    else{
        printf("Winter\n");
    }
}
