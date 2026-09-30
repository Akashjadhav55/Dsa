// Q3: Count how many uppercase and lowercase letters a string has.
// Input: A string
// Output: Uppercase count and lowercase count

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, upper = 0, lower = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper += 1;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lower += 1;
        }
    }
    printf("Uppercase: %d\n", upper);
    printf("Lowercase: %d\n", lower);
    return 0;
}