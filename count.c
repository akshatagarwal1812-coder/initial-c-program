#include <stdio.h>
#include <string.h>
int main() {
    char c[100];
    printf("enter the values string");
    fgets(c,100,stdin);
    char s;
    printf("enter the character of occurrence to be found \n");
    scanf(" %c",&s);
    int count=0;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]==s)
        {
            count++;
        }
    }
    printf("occurence of charachter in a string=%d",count);
    return 0;
}