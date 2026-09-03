# include <stdio.h>
int main()
{
    float radius,area;
    printf("enter the radius of circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area of circle=%f\n",area);
    printf("if also want cylendder volume then enter height else 0\n");
    float h;
    scanf("%f",&h);
    if(h != 0) {
        printf("volume of cylinder= %f\n",3.14*radius*radius*h);
    }
    return 0;
}