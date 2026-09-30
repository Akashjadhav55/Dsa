// Q5: Print characters that appear more than once (without map).
// Input: A string
// Output: Repeated characters

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], c, result[100];
    int freq[26], i, k = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (char)(s[i] + 32);
        }
    }
    for (i = 0; i < 26; i++) {
        freq[i] = 0;
    }
    for (i = 0; s[i] != '\0'; i++) {
        c = s[i];
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (freq[i] > 1) {
            result[k] = (char)(i + 'a');
            k++;
            result[k] = ' ';
            k++;
        }
    }
    if (k > 0) {
        k--;
    }
    result[k] = '\0';
    printf("%s\n", result);
    return 0;
}