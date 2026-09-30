// Q7: Toggle case for every alternate word in a sentence.
// Input: A sentence
// Output: Modified sentence

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], result[2000], *w;
    int i = 0, j, k = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    result[0] = '\0';
    w = strtok(s, " ");
    while (w != NULL) {
        if (i % 2 == 1) {
            for (j = 0; w[j] != '\0'; j++) {
                if (w[j] >= 'a' && w[j] <= 'z') {
                    result[k] = (char)(w[j] - 32);
                } else if (w[j] >= 'A' && w[j] <= 'Z') {
                    result[k] = (char)(w[j] + 32);
                } else {
                    result[k] = w[j];
                }
                k++;
            }
        } else {
            for (j = 0; w[j] != '\0'; j++) {
                result[k] = w[j];
                k++;
            }
        }
        result[k] = ' ';
        k++;
        i++;
        w = strtok(NULL, " ");
    }
    if (k > 0) {
        k--;
    }
    result[k] = '\0';
    printf("%s\n", result);
    return 0;
}