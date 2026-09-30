// Q4: Find the frequency of each character in a string (without map).
// Input: A string
// Output: Frequency of each character

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int freq[256], i;
    for (i = 0; i < 256; i++) {
        freq[i] = 0;
    }
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]] += 1;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", (char)i, freq[i]);
        }
    }
    return 0;
}