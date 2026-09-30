// Q6: Find all pairs of characters in a string that are the same (nested loop).
// Input: A string
// Output: All matching character pairs with indices

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, len;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    len = (int)strlen(s);
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                printf("'%c' at index %d and %d\n", s[i], i, j);
            }
        }
    }
    return 0;
}