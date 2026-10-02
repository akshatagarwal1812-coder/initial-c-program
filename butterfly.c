#include <stdio.h>
int main()
{
    int n, s = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            s = (n - (i + 1)) * 2;
            if (j <= i || j > (i + s))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
     for (int j = 0; j < 2 * n; j++)
        {
            s = i*2;
            if (j <= (n-1-i) || j > (n-1-i+ s))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
