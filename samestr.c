#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    char str[10];

    printf("Enter 9 characters: ");
    for (int i = 0; i < 9; i++) {
        scanf(" %c", &s[i]);   // space before %c skips stray whitespace/newlines
    }
    s[9] = '\0';   // null-terminate manually!

    printf("Enter the value of string: ");
    scanf("%s", str);   // no & needed, str already decays to a pointer

    if (strcmp(s, str) == 0) {
        printf("entered strings are equal");
    } else {
        printf("entered strings are not equal");
    }

    return 0;
}
