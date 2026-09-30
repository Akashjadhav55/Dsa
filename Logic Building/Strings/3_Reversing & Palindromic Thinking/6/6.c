// Q6: Print the middle character(s) of a string.
// Input: A string
// Output: Middle character(s)

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int length;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    length = (int)strlen(s);
    if (length % 2 == 0) {
        printf("%c%c\n", s[length / 2 - 1], s[length / 2]);
    } else {
        printf("%c\n", s[length / 2]);
    }
    return 0;
}