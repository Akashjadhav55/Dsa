// Q5: Print an increasing triangle of stars.
// Input: An integer n
// Output: Triangle with 1 star in row 1, 2 in row 2, etc.

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}