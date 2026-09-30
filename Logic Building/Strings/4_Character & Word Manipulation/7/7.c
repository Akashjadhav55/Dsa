// Q7: Keep only the first occurrence of each character.
// Input: A string
// Output: String with only first occurrences

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], result[1000];
    int seen[256], i, j = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; i < 256; i++) {
        seen[i] = 0;
    }
    for (i = 0; s[i] != '\0'; i++) {
        if (seen[(int)s[i]] == 0) {
            seen[(int)s[i]] = 1;
            result[j] = s[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}