// Q5: Print the string after removing all digits.
// Input: A string
// Output: String without digits

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    char result[1000];
    int i, j;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (isdigit((unsigned char)s[i]) == 0) {
            result[j] = s[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}