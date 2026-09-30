// Q7: Print all characters of a string one by one recursively.
// Input: A string
// Output: Each character on a new line

#include <stdio.h>
#include <string.h>

void print_chars(char *s, int i) {
    if (i == (int)strlen(s)) {
        return;
    }
    printf("%c\n", s[i]);
    print_chars(s, i + 1);
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    print_chars(s, 0);
    return 0;
}