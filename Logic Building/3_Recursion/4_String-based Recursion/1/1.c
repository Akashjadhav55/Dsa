// Q1: Reverse a string using recursion.
// Input: A string
// Output: Reversed string

#include <stdio.h>
#include <string.h>

void reverse_string(char s[], int i, char res[], int pos) {
    if (i < 0) {
        res[pos] = '\0';
        return;
    }
    res[pos] = s[i];
    reverse_string(s, i - 1, res, pos + 1);
}

int main() {
    char s[1000], res[1000];
    int i;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    i = (int)strlen(s) - 1;
    reverse_string(s, i, res, 0);
    printf("%s\n", res);
    return 0;
}