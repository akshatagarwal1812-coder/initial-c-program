#include <stdio.h>

int main() {
    float a,b,c,d,e;
    printf("enter the prise of 5 product ");
    scanf("%f %f %f %f %f", &a,&b,&c,&d,&e);
    int sum=(int)(a+b+c+d+e);
    printf("total bill amount=%d",sum);
    return 0;
}