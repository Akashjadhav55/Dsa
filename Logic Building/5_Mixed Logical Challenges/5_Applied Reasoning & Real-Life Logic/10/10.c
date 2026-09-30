// Q10: Print all palindromic words from a sentence.
// Input: A sentence
// Output: Palindromic words

#include <stdio.h>
#include <string.h>

int main() {
    char line[1000], *word;
    int i, len, is_palindrome;
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';
    word = strtok(line, " ");
    while (word != NULL) {
        len = (int)strlen(word);
        is_palindrome = 1;
        for (i = 0; i < len / 2; i++) {
            if (word[i] != word[len - 1 - i]) {
                is_palindrome = 0;
                break;
            }
        }
        if (is_palindrome == 1) {
            printf("%s\n", word);
        }
        word = strtok(NULL, " ");
    }
    return 0;
}