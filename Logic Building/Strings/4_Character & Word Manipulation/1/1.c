// Q1: Remove all vowels from a string.
// Input: A string
// Output: String without vowels

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    char result[1000];
    char c;
    int i, j;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        c = (char)tolower((unsigned char)s[i]);
        if (strchr("aeiou", c) == NULL) {
            result[j] = s[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}