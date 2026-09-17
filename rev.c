#include <stdio.h>
    
    void rev(int a[10], int n)
    {
        for (int i=n-1;i>=0;i--)
        {
            printf("%d ",(a[i]));
        }

    }
   
int main()

{
     int ar[10]={1,2,3,4,5,6,7,8,9,10};
    rev(ar, 10);
    return 0;
}
