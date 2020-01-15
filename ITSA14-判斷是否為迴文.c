#include <stdio.h>
#include <string.h>

int main()
{
    char line[100000];
    scanf("%s", line);
    int len = strlen(line);
    int half_len = len/2;
    for(int i=0;i<half_len;i++){
        if(line[i]!=line[len-1-i]){ //compare head to tail
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
