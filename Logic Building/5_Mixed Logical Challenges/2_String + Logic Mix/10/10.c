// Q10: Remove duplicate words from a sentence.
// Input: A sentence
// Output: Sentence without duplicate words

#include <stdio.h>
#include <string.h>

int main() {
    char line[1000], words[100][100], result[2000];
    char *token;
    int i, j, nwords, duplicate;
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';

    nwords = 0;
    token = strtok(line, " ");
    while (token != NULL) {
        strcpy(words[nwords], token);
        nwords += 1;
        token = strtok(NULL, " ");
    }

    result[0] = '\0';
    for (i = 0; i < nwords; i++) {
        duplicate = 0;
        for (j = 0; j < i; j++) {
            if (strcmp(words[j], words[i]) == 0) {
                duplicate = 1;
            }
        }
        if (duplicate == 0) {
            if (result[0] != '\0') {
                strcat(result, " ");
            }
            strcat(result, words[i]);
        }
    }
    printf("%s\n", result);
    return 0;
}