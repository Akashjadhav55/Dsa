// Q5: Count how many characters (excluding spaces) are in the string.
// Input: A string
// Output: Character count excluding spaces

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, len, count;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    len = (int)strlen(s);
    count = 0;
    for (i = 0; i < len; i++) {
        if (s[i] != ' ') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}