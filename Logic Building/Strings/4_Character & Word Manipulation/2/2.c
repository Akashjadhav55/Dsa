// Q2: Remove all spaces from a string.
// Input: A string
// Output: String without spaces

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char result[1000];
    int i, j;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            result[j] = s[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}