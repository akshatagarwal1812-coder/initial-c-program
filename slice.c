#include <stdio.h>
#include <string.h>
char slice(int a,int b)
{
    char str[20]="akshatagarwal";
    char ns[20];
    int j=0;
    for(int i=a;i<b;i++)
    {
        ns[j]=str[i];
        j++;
    }
    printf("sliced string %s \n",ns);
}
int main() {
    printf("enter starting index and last index");
    int m,n;
    scanf("%d %d",&m,&n);
    slice(m,n);
    return 0;
}