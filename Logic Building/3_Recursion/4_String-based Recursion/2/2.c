// Q2: Check if a string is palindrome using recursion.
// Input: A string
// Output: "Palindrome" or "Not a Palindrome"

#include <stdio.h>
#include <string.h>

int is_palindrome(char s[], int l, int r) {
    if (l >= r) {
        return 1;
    }
    if (s[l] != s[r]) {
        return 0;
    }
    return is_palindrome(s, l + 1, r - 1);
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    if (is_palindrome(s, 0, (int)strlen(s) - 1)) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}