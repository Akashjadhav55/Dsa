// Q2: Print the first and last character of a string.
// Input: A string
// Output: First and last character

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int len;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    len = (int)strlen(s);
    printf("%c %c\n", s[0], s[len - 1]);
    return 0;
}