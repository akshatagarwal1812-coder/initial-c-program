#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float temp;
    char deg;
    printf("enter temprature in any degree and  degree type (C/F):\n ");
    scanf("%f %c",&temp,&deg);
    if (deg =='C')
    {
        celsius=temp;
        fahrenheit= (temp * 9/5) + 32;
        printf("temprature in fahrenhite= %f\n",fahrenheit);
    }
    else if (deg =='F')
    {
        fahrenheit=temp;
        celsius= (temp - 32) * 5/9;
        printf("temprature in celsius= %f\n",celsius);
    }
    else
    {
        printf("invalid degree type\n");
        return 1;
    }

    return 0;
}