#include <stdio.h>

void rev(int ar[10])
{

    int ar[10];
    printf("enter the values of the 1D array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }
    int *m = ar;
    int t = 0;
    printf("the alternate elements of the array are:\n");
    for (int i = 0; i < 10; i += 2)
    {
        printf("%d,%u ", *(m + i), (m + i));
    }
return 0;
}
