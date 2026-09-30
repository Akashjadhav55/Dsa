// Q8: Remove consecutive duplicates ("aaabb" -> "ab").
// Input: A string
// Output: String without consecutive duplicates

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], result[1000];
    int i, j = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            result[j] = s[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}