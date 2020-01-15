#include <stdio.h>
int main()
{
    int n, i;
    int s1, s2, s3, fcnt;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        fcnt=0;     //FAIL cnt
        scanf("%d %d %d", &s1, &s2, &s3);
        /* calculate failed subjects */
        if(s1<60){
            fcnt++;
        }
        if(s2<60){
            fcnt++;
        }
        if(s3<60){
            fcnt++;
        }
        if((s1>=60 && s2>=60 && s3>=60) || (fcnt==1 && s1+s2+s3>=220)){
            printf("P\n");
        }
        else if((fcnt==1 && s1+s2+s3<220) || (fcnt==2 && (s1>=80 || s2>=80 || s3>=80))){
            printf("M\n");
        }
        else{
            printf("F\n");
        }
    }
    return 0;
}
