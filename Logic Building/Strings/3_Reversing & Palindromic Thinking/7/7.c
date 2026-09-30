// Q7: Print the second half of the string in reverse.
// Input: A string
// Output: Second half reversed

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char rev[1000];
    int mid;
    int i, j;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    mid = (int)strlen(s) / 2;
    j = 0;
    for (i = mid; s[i] != '\0'; i++) {
        rev[j] = s[i];
        j++;
    }
    rev[j] = '\0';
    for (i = j - 1; i >= 0; i--) {
        printf("%c", rev[i]);
    }
    printf("\n");
    return 0;
}