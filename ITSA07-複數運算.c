#include  <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    char op;
    int a, b, c, d;
    for(int i=0;i<n;i++){
        //printf("%c\n", op);
        scanf("%c %d %d %d %d", &op, &a, &b, &c, &d);
        //printf("%c %d %d %d %d\n", op, a, b, c, d);
        switch(op){
            case '+':
                {
                    printf("%d %d\n", a+c, b+d);
                    break;
                }
            case '-':
                {
                    printf("%d %d\n", a-c, b-d);
                    break;
                }
            case '*':
                {
                    printf("%d %d\n", a*c-b*d, a*d+c*b);
                }
        }
        if(i!=n-1){
                scanf("\n");
        }
    }
}
