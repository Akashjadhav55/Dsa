// Q1: Count how many vowels and consonants are in a string.
// Input: A string
// Output: Vowel count and consonant count

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, vowels = 0, consonants = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (strchr("aeiou", s[i]) != NULL) {
                vowels += 1;
            } else {
                consonants += 1;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}