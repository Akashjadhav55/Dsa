// Q9: Reverse only characters, keeping digits in place.
// Input: A string
// Output: Reversed characters, digits in original positions

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    char temp;
    int left, right;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    left = 0;
    right = (int)strlen(s) - 1;
    while (left < right) {
        if (isdigit((unsigned char)s[left]) != 0) {
            left++;
        } else if (isdigit((unsigned char)s[right]) != 0) {
            right--;
        } else {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
    printf("%s\n", s);
    return 0;
}