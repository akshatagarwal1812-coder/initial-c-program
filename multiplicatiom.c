#include <stdio.h>

int main()
{
    int ar[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                ar[i][j] = (j + 1) * 2; // First row: 1 to 10
            }
            else if (i == 1)
            {
                ar[i][j] = (j + 1) * 3; // Second row: 2, 4, 6, ..., 20
            }
            else
            {
                ar[i][j] = (j + 1) * 7; // Third row: 3, 6, 9, ..., 30
            }
        }
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}