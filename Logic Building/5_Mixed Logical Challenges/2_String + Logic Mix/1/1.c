// Q1: Check if two strings are anagrams (without using collections).
// Input: Two strings
// Output: "Anagrams" or "Not Anagrams"

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[1000], s2[1000];
    int freq[26], i, f, all_zero;
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    for (i = 0; s1[i] != '\0'; i++) {
        s1[i] = tolower(s1[i]);
    }
    for (i = 0; s2[i] != '\0'; i++) {
        s2[i] = tolower(s2[i]);
    }
    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagrams\n");
    } else {
        for (i = 0; i < 26; i++) {
            freq[i] = 0;
        }
        for (i = 0; s1[i] != '\0'; i++) {
            freq[s1[i] - 'a'] += 1;
        }
        for (i = 0; s2[i] != '\0'; i++) {
            freq[s2[i] - 'a'] -= 1;
        }
        all_zero = 1;
        for (f = 0; f < 26; f++) {
            if (freq[f] != 0) {
                all_zero = 0;
            }
        }
        if (all_zero) {
            printf("Anagrams\n");
        } else {
            printf("Not Anagrams\n");
        }
    }
    return 0;
}