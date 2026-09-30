// Q10: Count how many words end with 's'.
// Input: A sentence
// Output: Count of words ending with 's'

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char w[1000];
    char *token;
    int count;
    int len;
    count = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    token = strtok(s, " \t");
    while (token != NULL) {
        strncpy(w, token, sizeof(w) - 1);
        w[sizeof(w) - 1] = '\0';
        len = strlen(w);
        if (len > 0 && w[len - 1] == 's') {
            count++;
        }
        token = strtok(NULL, " \t");
    }

    printf("%d\n", count);
    return 0;
}