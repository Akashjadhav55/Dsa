// Q8: Check if two strings are rotations of each other.
// Input: Two strings
// Output: "Yes" or "No"

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], doubled[2000];
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    if (strlen(s1) != strlen(s2)) {
        printf("No\n");
    } else {
        strcpy(doubled, s1);
        strcat(doubled, s1);
        if (strstr(doubled, s2) != NULL) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}