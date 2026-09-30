// Q9: Swap case: uppercase to lowercase and vice versa.
// Input: A string
// Output: Case-swapped string

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], result[1000];
    int i, j = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result[j] = s[i] + 32;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            result[j] = s[i] - 32;
        } else {
            result[j] = s[i];
        }
        j++;
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}