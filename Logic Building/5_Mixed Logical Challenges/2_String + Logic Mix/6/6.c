// Q6: Count words that start and end with the same letter.
// Input: A sentence
// Output: Count of such words

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], *w;
    int i, count = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (char)(s[i] + 32);
        }
    }
    w = strtok(s, " ");
    while (w != NULL) {
        if (strlen(w) > 0 && w[0] == w[strlen(w) - 1]) {
            count++;
        }
        w = strtok(NULL, " ");
    }
    printf("%d\n", count);
    return 0;
}