// Q5: Count how many spaces are there in a sentence.
// Input: A sentence
// Output: Space count

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, count = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}