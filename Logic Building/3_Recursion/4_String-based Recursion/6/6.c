// Q6: Remove all occurrences of a character from a string recursively.
// Input: A string and a character
// Output: String without the character

#include <stdio.h>
#include <string.h>

int remove_char(char *s, int i, char ch, char *out) {
    if (i == (int)strlen(s)) {
        out[0] = '\0';
        return 0;
    }
    if (s[i] == ch) {
        return remove_char(s, i + 1, ch, out);
    }
    out[0] = s[i];
    return 1 + remove_char(s, i + 1, ch, out + 1);
}

int main() {
    char s[1000], ch[100], out[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    remove_char(s, 0, ch[0], out);
    printf("%s\n", out);
    return 0;
}