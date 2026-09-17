#include <stdio.h>
#include <string.h>

char enc(char str[]) 
{
    char ns[strlen(str)+1];
    for(int i=0;i<strlen(str);i++){
        ns[i]=str[i]+1;
    }
    ns[strlen(str)]= '\0';
    printf("Encrypted string: %s\n", ns);
}
int main() {
    char st[100];
    printf("Enter a string: ");
    scanf("%s", st);
    enc(st);
    return 0;
}