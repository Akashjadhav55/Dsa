// Q8: Print characters that are common in two strings.
// Input: Two strings
// Output: Common characters

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], common[1000];
    int i, j, k, len, len2, inS2, already;
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    len = (int)strlen(s1);
    len2 = (int)strlen(s2);
    for (i = 0; i < len; i++) {
        s1[i] = (char)tolower((unsigned char)s1[i]);
    }
    for (i = 0; i < len2; i++) {
        s2[i] = (char)tolower((unsigned char)s2[i]);
    }
    k = 0;
    for (i = 0; i < len; i++) {
        inS2 = 0;
        for (j = 0; j < len2; j++) {
            if (s1[i] == s2[j]) {
                inS2 = 1;
            }
        }
        already = 0;
        for (j = 0; j < k; j++) {
            if (common[j] == s1[i]) {
                already = 1;
            }
        }
        if (inS2 == 1 && already == 0) {
            common[k] = s1[i];
            k++;
        }
    }
    common[k] = '\0';
    for (i = 0; i < k; i++) {
        printf("%c", common[i]);
        if (i < k - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}