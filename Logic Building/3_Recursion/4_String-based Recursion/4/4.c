// Q4: Remove all spaces from a string recursively.
// Input: A string
// Output: String without spaces

#include <stdio.h>
#include <string.h>

void remove_spaces(char s[], int i, char res[], int pos) {
    if (i == (int)strlen(s)) {
        res[pos] = '\0';
        return;
    }
    if (s[i] == ' ') {
        remove_spaces(s, i + 1, res, pos);
        return;
    }
    res[pos] = s[i];
    remove_spaces(s, i + 1, res, pos + 1);
}

int main() {
    char s[1000], res[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    remove_spaces(s, 0, res, 0);
    printf("%s\n", res);
    return 0;
}