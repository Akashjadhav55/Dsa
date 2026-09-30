// Q4: Convert all characters of a string to lowercase.
// Input: A string
// Output: Lowercase string

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    int i, len;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    len = (int)strlen(s);
    for (i = 0; i < len; i++) {
        s[i] = (char)tolower((unsigned char)s[i]);
    }
    printf("%s\n", s);
    return 0;
}