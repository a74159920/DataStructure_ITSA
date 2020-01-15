#include  <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    /* r = sqrt(x^2 + y^2) -> r^2 = x^2 + y^2 */
    /* -> r^2 = 10000 */
    if(x>=-100 && x<=100 && y>=-100 && y<=100 && x*x+y*y<=10000){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
}
