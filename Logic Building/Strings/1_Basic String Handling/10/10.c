// Q10: Check whether the string is empty or not.
// Input: A string
// Output: "Empty" or "Not Empty"

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    if (strlen(s) == 0) {
        printf("Empty\n");
    } else {
        printf("Not Empty\n");
    }
    return 0;
}