// Q15: Print binary alternating pattern (1, 01, 101, 0101).
// Input: An integer n
// Output: Binary alternating pattern

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char row[1000];
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        row[0] = '\0';
        for (j = 0; j < i; j++) {
            if ((i + j) % 2 == 0) {
                strcat(row, "1");
            } else {
                strcat(row, "0");
            }
        }
        printf("%s\n", row);
    }
    return 0;
}