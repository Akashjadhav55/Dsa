// Q4: Replace every vowel in a string with its position (a=1, e=2...).
// Input: A string
// Output: Vowels replaced with positions

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000], result[2000], vowels[6], number[4], c;
    char *found;
    int i, pos;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    strcpy(vowels, "aeiou");
    result[0] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        c = tolower(s[i]);
        found = strchr(vowels, c);
        if (found != NULL) {
            pos = (int)(found - vowels);
            sprintf(number, "%d", pos + 1);
            strcat(result, number);
        } else {
            number[0] = c;
            number[1] = '\0';
            strcat(result, number);
        }
    }
    printf("%s\n", result);
    return 0;
}