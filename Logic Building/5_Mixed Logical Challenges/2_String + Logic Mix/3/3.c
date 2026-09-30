// Q3: Reverse words in a string if their length is even.
// Input: A sentence
// Output: Modified sentence

#include <stdio.h>
#include <string.h>

int main() {
    char line[1000], result[2000], temp;
    char *token;
    int i, len;
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';

    result[0] = '\0';
    token = strtok(line, " ");
    while (token != NULL) {
        len = strlen(token);
        if (len % 2 == 0) {
            for (i = 0; i < len / 2; i++) {
                temp = token[i];
                token[i] = token[len - 1 - i];
                token[len - 1 - i] = temp;
            }
        }
        if (result[0] != '\0') {
            strcat(result, " ");
        }
        strcat(result, token);
        token = strtok(NULL, " ");
    }
    printf("%s\n", result);
    return 0;
}