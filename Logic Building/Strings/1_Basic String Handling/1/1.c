// Q1: Take a string input and print its length.
// Input: A string
// Output: Length of the string

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%d\n", (int)strlen(s));
    return 0;
}