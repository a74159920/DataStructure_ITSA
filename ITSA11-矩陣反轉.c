#include <stdio.h>

int main(void)
{
    int row, column, i, j;
    while(scanf("%d %d", &row, &column)!=EOF){
        int arr[row][column];
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
                scanf("%d", &arr[i][j]);
            }
        }
        //reverse i, j
        for(j=0;j<column;j++){
            for(i=0;i<row;i++){
                if(i==row-1){   //if it's end of row
                    printf("%d", arr[i][j]);
                }
                else{
                    printf("%d ", arr[i][j]);
                }
            }
            printf("\n");
        }
    }
}
