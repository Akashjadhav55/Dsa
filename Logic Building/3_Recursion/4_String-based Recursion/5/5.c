// Q5: Replace all occurrences of a character (say 'a' -> 'x') recursively.
// Input: A string and characters to find/replace
// Output: Modified string

#include <stdio.h>
#include <string.h>

int replace_char(char *s, int i, char *find, char *replace, char *out) {
    int k, j;
    if (i == (int)strlen(s)) {
        out[0] = '\0';
        return 0;
    }
    k = 0;
    if (s[i] == find[0]) {
        for (j = 0; replace[j] != '\0'; j++) {
            out[k++] = replace[j];
        }
    } else {
        out[k++] = s[i];
    }
    return k + replace_char(s, i + 1, find, replace, out + k);
}

int main() {
    char s[1000], find[100], replace[100], out[10000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    fgets(find, sizeof(find), stdin);
    find[strcspn(find, "\n")] = '\0';
    fgets(replace, sizeof(replace), stdin);
    replace[strcspn(replace, "\n")] = '\0';
    replace_char(s, 0, find, replace, out);
    printf("%s\n", out);
    return 0;
}