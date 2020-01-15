#include <stdio.h>
int main()
{
    int x, a, b, c, d;
    scanf("%d", &x);
    /* get every digit */
    d = x%10;
    x/=10;
    c = x%10;
    x/=10;
    b = x%10;
    x/=10;
    a = x%10;
    //printf("%d %d %d %d\n", a, b, c, d);
    /* print out the result line by line */
    /* first line */
    if(a==1){
        printf("    * ");
    }
    else if(a==2 || a==3 || a==5 || a==6 || a==7 || a==8 || a==9 || a==0){
        printf("***** ");
    }
    else if(a==4){
        printf("*   * ");
    }
    if(b==1){
        printf("    * ");
    }
    else if(b==2 || b==3 || b==5 || b==6 || b==7 || b==8 || b==9 || b==0){
        printf("***** ");
    }
    else if(b==4){
        printf("*   * ");
    }
    if(c==1){
        printf("    * ");
    }
    else if(c==2 || c==3 || c==5 || c==6 || c==7 || c==8 || c==9 || c==0){
        printf("***** ");
    }
    else if(c==4){
        printf("*   * ");
    }
    if(d==1){
        printf("    *\n");
    }
    else if(d==2 || d==3 || d==5 || d==6 || d==7 || d==8 || d==9 || d==0){
        printf("*****\n");
    }
    else if(d==4){
        printf("*   *\n");
    }
    // 2
    if(a==1 || a==2 || a==3 || a==7){
        printf("    * ");
    }
    else if(a==0 || a==4 || a==8 || a==9){
        printf("*   * ");
    }
    else if(a==5 || a==6){
        printf("*     ");
    }
    if(b==1 || b==2 || b==3 || b==7){
        printf("    * ");
    }
    else if(b==0 || b==4 || b==8 || b==9){
        printf("*   * ");
    }
    else if(b==5 || b==6){
        printf("*     ");
    }
    if(c==1 || c==2 || c==3 || c==7){
        printf("    * ");
    }
    else if(c==0 || c==4 || c==8 || c==9){
        printf("*   * ");
    }
    else if(c==5 || c==6){
        printf("*     ");
    }
    if(d==1 || d==2 || d==3 || d==7){
        printf("    *\n");
    }
    else if(d==0 || d==4 || d==8 || d==9){
        printf("*   *\n");
    }
    else if(d==5 || d==6){
        printf("*    \n");
    }
    // 3
    if(a==1 || a==7){
        printf("    * ");
    }
    else if(a==2 || a==3 || a==4 || a==5 || a==6 ||  a==8 || a==9){
        printf("***** ");
    }
    else if(a==0){
        printf("*   * ");
    }
    if(b==1 || b==7){
        printf("    * ");
    }
    else if(b==2 || b==3 || b==4 || b==5 || b==6 ||  b==8 || b==9){
        printf("***** ");
    }
    else if(b==0){
        printf("*   * ");
    }
    if(c==1 || c==7){
        printf("    * ");
    }
    else if(c==2 || c==3 || c==4 || c==5 || c==6 ||  c==8 || c==9){
        printf("***** ");
    }
    else if(c==0){
        printf("*   * ");
    }
    if(d==1 || d==7){
        printf("    *\n");
    }
    else if(d==2 || d==3 || d==4 || d==5 || d==6 ||  d==8 || d==9){
        printf("*****\n");
    }
    else if(d==0){
        printf("*   *\n");
    }
    // 4
    if(a==1 || a==3 || a==4 || a==5 || a==7 ||a==9){
        printf("    * ");
    }
    else if(a==0 || a==6 || a==8){
        printf("*   * ");
    }
    else if(a==2){
        printf("*     ");
    }
    if(b==1 || b==3 || b==4 || b==5 || b==7 ||b==9){
        printf("    * ");
    }
    else if(b==0 || b==6 || b==8){
        printf("*   * ");
    }
    else if(b==2){
        printf("*     ");
    }
    if(c==1 || c==3 || c==4 || c==5 || c==7 ||c==9){
        printf("    * ");
    }
    else if(c==0 || c==6 || c==8){
        printf("*   * ");
    }
    else if(c==2){
        printf("*     ");
    }
    if(d==1 || d==3 || d==4 || d==5 || d==7 ||d==9){
        printf("    *\n");
    }
    else if(d==0 || d==6 || d==8){
        printf("*   *\n");
    }
    else if(d==2){
        printf("*    \n");
    }
    // 5
    if(a==1 || a==7 || a==4 || a==9){
        printf("    * ");
    }
    else if(a==2 || a==3 || a==5 || a==6 || a==0 || a==8 || a==9){
        printf("***** ");
    }
    if(b==1 || b==7 || b==4 || b==9){
        printf("    * ");
    }
    else if(b==2 || b==3 || b==5 || b==6 || b==0 || b==8 || b==9){
        printf("***** ");
    }
    if(c==1 || c==7 || c==4 || c==9){
        printf("    * ");
    }
    else if(c==2 || c==3 || c==5 || c==6 || c==0 || c==8 || c==9){
        printf("***** ");
    }
    if(d==1 || d==7 || d==4 || d==9){
        printf("    *\n");
    }
    else if(d==2 || d==3 || d==5 || d==6 || d==0 || d==8 || d==9){
        printf("*****\n");
    }
}
