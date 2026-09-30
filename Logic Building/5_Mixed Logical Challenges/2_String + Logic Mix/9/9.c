// Q9: Find the word with maximum vowels in a sentence.
// Input: A sentence
// Output: Word with most vowels

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], max_word[1000], *w, c;
    int max_count = 0, count, j;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    max_word[0] = '\0';
    w = strtok(s, " ");
    while (w != NULL) {
        count = 0;
        for (j = 0; w[j] != '\0'; j++) {
            c = w[j];
            if (c >= 'A' && c <= 'Z') {
                c = (char)(c + 32);
            }
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            strcpy(max_word, w);
        }
        w = strtok(NULL, " ");
    }
    printf("%s\n", max_word);
    return 0;
}