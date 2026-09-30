// Q9: Print a centered pyramid of stars.
// Input: An integer n
// Output: Centered pyramid pattern

#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}