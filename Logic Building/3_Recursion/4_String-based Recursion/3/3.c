// Q3: Count vowels in a string recursively.
// Input: A string
// Output: Count of vowels

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_vowels(char s[], int i) {
    int c, count;
    if (i == (int)strlen(s)) {
        return 0;
    }
    c = tolower((unsigned char)s[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        count = 1;
    } else {
        count = 0;
    }
    return count + count_vowels(s, i + 1);
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%d\n", count_vowels(s, 0));
    return 0;
}