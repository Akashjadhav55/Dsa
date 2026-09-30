// Q10: Reverse string but skip spaces.
// Input: A string
// Output: Reversed string with spaces in original positions

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char temp;
    int left, right;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    left = 0;
    right = (int)strlen(s) - 1;
    while (left < right) {
        if (s[left] == ' ') {
            left++;
        } else if (s[right] == ' ') {
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