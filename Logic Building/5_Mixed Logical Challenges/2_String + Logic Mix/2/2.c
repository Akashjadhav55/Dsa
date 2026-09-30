// Q2: Count vowels in each word of a sentence.
// Input: A sentence
// Output: Vowel count per word

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000], c;
    char *token;
    int i, count;
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';

    token = strtok(line, " ");
    while (token != NULL) {
        count = 0;
        for (i = 0; token[i] != '\0'; i++) {
            c = tolower(token[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count += 1;
            }
        }
        printf("%s: %d\n", token, count);
        token = strtok(NULL, " ");
    }
    return 0;
}