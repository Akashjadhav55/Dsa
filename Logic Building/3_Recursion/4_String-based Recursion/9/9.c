// Q9: Convert a string to uppercase recursively.
// Input: A string
// Output: Uppercase string

#include <stdio.h>
#include <string.h>

int to_uppercase(char *s, int i, char *out) {
    char c;
    if (i == (int)strlen(s)) {
        out[0] = '\0';
        return 0;
    }
    c = s[i];
    if (c >= 'a' && c <= 'z') {
        c = (char)(c - 32);
    }
    out[0] = c;
    return 1 + to_uppercase(s, i + 1, out + 1);
}

int main() {
    char s[1000], out[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    to_uppercase(s, 0, out);
    printf("%s\n", out);
    return 0;
}