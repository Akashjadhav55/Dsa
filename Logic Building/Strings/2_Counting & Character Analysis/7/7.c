// Q7: Count alphabets before 'm' and after 'm' in a string.
// Input: A string
// Output: Count before and after 'm'

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    int before;
    int after;
    int found;
    int i;
    before = 0;
    after = 0;
    found = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (i = 0; i < strlen(s); i++) {
        if (s[i] == 'm' || s[i] == 'M') {
            found = 1;
        } else if (isalpha((unsigned char)s[i]) != 0) {
            if (found == 0) {
                before++;
            } else {
                after++;
            }
        }
    }

    printf("Before m: %d\n", before);
    printf("After m: %d\n", after);
    return 0;
}