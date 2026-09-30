// Q6: Count how many times a given character appears in a string.
// Input: A string and a character
// Output: Frequency of the character

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char ch;
    int count;
    int i;
    count = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    ch = fgetc(stdin);
    if (ch == '\n' || ch == '\r') {
        ch = fgetc(stdin);
    }

    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}