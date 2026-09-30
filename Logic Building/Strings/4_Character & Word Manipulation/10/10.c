// Q10: Shift each character by 1 ("abc" -> "bcd").
// Input: A string
// Output: Each character shifted by 1

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], result[1000];
    int i, j = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        result[j] = (char)(s[i] + 1);
        j++;
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}