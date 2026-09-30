// Q11: Print numbers in increasing sequence (1, 12, 123, 1234, 12345).
// Input: An integer n
// Output: Number sequence pattern

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}