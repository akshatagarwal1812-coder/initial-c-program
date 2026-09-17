#include <stdio.h>
#include<string.h>
struct employee{
    int salary;
    int code;
    char name[15];
};

int main() {
    struct employee e1,e2,e3;
    
    printf("enter the values of e1 \n");
    e1.salary=100;
    e1.code=321789;
    strcpy(e1.name,"akshat");
    printf("%d,%d,%s \n",&e1.code,&e1.salary,&e1.name);
    printf("enter the values of e2 \n");
    e2.salary=589;
    e2.code=321869;
    strcpy(e2.name,"akshat");
    printf("%d,%d,%s \n",&e2.code,&e2.salary,&e2.name);
    printf("enter the values of e3 \n");
    e3.salary=864;
    e3.code=321984;
    strcpy(e3.name,"akshat");
    printf("%d,%d,%s \n",&e3.code,&e3.salary,&e3.name);
}