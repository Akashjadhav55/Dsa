// Q3: Validate a password (at least one uppercase, lowercase, digit, special char).
// Input: A password string
// Output: "Valid" or "Invalid"

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char pwd[1000];
    int i, len, has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;
    fgets(pwd, sizeof(pwd), stdin);
    pwd[strcspn(pwd, "\n")] = '\0';
    len = (int)strlen(pwd);
    for (i = 0; i < len; i++) {
        if (isupper((unsigned char)pwd[i]) != 0) {
            has_upper = 1;
        }
        if (islower((unsigned char)pwd[i]) != 0) {
            has_lower = 1;
        }
        if (isdigit((unsigned char)pwd[i]) != 0) {
            has_digit = 1;
        }
        if (isalnum((unsigned char)pwd[i]) == 0) {
            has_special = 1;
        }
    }
    if (has_upper && has_lower && has_digit && has_special) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    return 0;
}