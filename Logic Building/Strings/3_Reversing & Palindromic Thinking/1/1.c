// Q1: Reverse a string without using built-in reverse.
// Input: A string
// Output: Reversed string

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char rev[1001];
    int len;
    int i;
    rev[0] = '\0';

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    len = strlen(s);

    for (i = 0; i < len; i++) {
        memmove(rev + 1, rev, strlen(rev) + 1);
        rev[0] = s[i];
    }

    printf("%s\n", rev);
    return 0;
}