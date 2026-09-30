// Q9: Print how many words start with a vowel.
// Input: A sentence
// Output: Count of words starting with a vowel

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char w[1000];
    char *token;
    int count;
    int isVowel;
    int i;
    count = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    token = strtok(s, " \t");
    while (token != NULL) {
        strncpy(w, token, sizeof(w) - 1);
        w[sizeof(w) - 1] = '\0';
        isVowel = 0;
        for (i = 0; i < strlen(w); i++) {
            if (strchr("aeiouAEIOU", w[i]) != NULL) {
                isVowel = 1;
            }
        }
        if (isVowel == 1) {
            count++;
        }
        token = strtok(NULL, " \t");
    }

    printf("%d\n", count);
    return 0;
}