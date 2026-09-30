// Q2: Count the number of digits, letters, and special characters.
// Input: A string
// Output: Count of digits, letters, and special characters

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, digits = 0, letters = 0, special = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            digits += 1;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            letters += 1;
        } else if (s[i] != ' ') {
            special += 1;
        }
    }
    printf("Digits: %d\n", digits);
    printf("Letters: %d\n", letters);
    printf("Special characters: %d\n", special);
    return 0;
}