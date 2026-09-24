#include <stdio.h>
 struct vector{
    int i;
    int j;
};
int main() {
struct vector v1,v2;
printf("enter the values of v1 \n");
scanf("%d %d",&v1.i, &v1.j);
printf("enter the values of v2 \n");
scanf("%d %d",&v2.i, &v2.j);
printf("sum of vectors is %di + %dj",(v1.i+v2.i),(v1.j+v2.j));
}  