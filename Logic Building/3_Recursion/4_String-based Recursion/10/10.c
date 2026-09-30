// Q10: Count consonants and vowels separately using recursion.
// Input: A string
// Output: Vowel count and consonant count

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_vc(char s[], int i, int v, int c, int *vowels, int *consonants) {
    char ch;
    if (i == (int)strlen(s)) {
        *vowels = v;
        *consonants = c;
        return;
    }
    ch = (char)tolower((unsigned char)s[i]);
    if (isalpha((unsigned char)ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count_vc(s, i + 1, v + 1, c, vowels, consonants);
        } else {
            count_vc(s, i + 1, v, c + 1, vowels, consonants);
        }
        return;
    }
    count_vc(s, i + 1, v, c, vowels, consonants);
}

int main() {
    char s[1000];
    int v, c;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    count_vc(s, 0, 0, 0, &v, &c);
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    return 0;
}