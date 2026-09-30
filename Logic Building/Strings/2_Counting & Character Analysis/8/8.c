// Q8: Count substrings that start and end with the same character.
// Input: A string
// Output: Count of such substrings

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int count;
    int i;
    int j;
    int len;
    count = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    len = strlen(s);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}