// Q6: Print frequency of each digit in a number.
// Input: An integer
// Output: Frequency of digits 0-9

#include <stdio.h>
#include <string.h>

int main() {
    char num[1000];
    int d, i, len, count;
    fgets(num, sizeof(num), stdin);
    num[strcspn(num, "\n")] = '\0';
    len = (int)strlen(num);
    for (d = '0'; d <= '9'; d++) {
        count = 0;
        for (i = 0; i < len; i++) {
            if (num[i] == d) {
                count++;
            }
        }
        if (count > 0) {
            printf("%c : %d\n", d, count);
        }
    }
    return 0;
}