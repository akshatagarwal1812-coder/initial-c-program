#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i < n - 1 - j)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    for (int k = 0; k < n - 1; k++)
    {
        for (int f = 0; f < n; f++)
        {
            if (k >= (n - f - 1))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}