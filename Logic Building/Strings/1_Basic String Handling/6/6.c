// Q6: Count how many words are in a sentence.
// Input: A sentence
// Output: Word count

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], *word;
    int count = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    if (strlen(s) == 0) {
        printf("0\n");
    } else {
        word = strtok(s, " \t\n");
        while (word != NULL) {
            count += 1;
            word = strtok(NULL, " \t\n");
        }
        printf("%d\n", count);
    }
    return 0;
}