// Q8: Compare two strings lexicographically.
// Input: Two strings
// Output: "String 1 comes first", "String 2 comes first", or "Equal"

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    int result;
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    result = strcmp(s1, s2);
    if (result < 0) {
        printf("String 1 comes first\n");
    } else if (result > 0) {
        printf("String 2 comes first\n");
    } else {
        printf("Equal\n");
    }
    return 0;
}