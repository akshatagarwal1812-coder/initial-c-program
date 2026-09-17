#include <stdio.h>

int main() {
    int ar[3][3];
    printf("enter the values of the 2D array\n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("the 2D array is:\n");
    int* m=ar[0];
    int t=0;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",ar[i][j]);
            t++;
        }
        printf("\n");
    }   
    return 0;
}