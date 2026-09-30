// Q7: Take two strings and print them concatenated.
// Input: Two strings
// Output: Concatenated string

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    printf("%s%s\n", s1, s2);
    return 0;
}