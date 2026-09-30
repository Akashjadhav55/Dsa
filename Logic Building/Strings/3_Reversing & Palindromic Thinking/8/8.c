// Q8: Remove the first and last character and print remaining.
// Input: A string
// Output: String without first and last character

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int length;
    int i;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    length = (int)strlen(s);
    if (length <= 2) {
        printf("\n");
    } else {
        for (i = 1; i < length - 1; i++) {
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}