// Q9: Print the ASCII value of each character in a string.
// Input: A string
// Output: ASCII values

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        printf("%d ", (int)s[i]);
    }
    printf("\n");
    return 0;
}