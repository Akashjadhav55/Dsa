// Q8: Print the string in reverse order recursively (without using loops).
// Input: A string
// Output: Reversed string

#include <stdio.h>
#include <string.h>

void print_reverse(char *s, int i) {
    if (i < 0) {
        return;
    }
    printf("%c", s[i]);
    print_reverse(s, i - 1);
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    print_reverse(s, (int)strlen(s) - 1);
    return 0;
}