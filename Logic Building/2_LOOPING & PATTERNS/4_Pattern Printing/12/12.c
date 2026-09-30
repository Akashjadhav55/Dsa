// Q12: Print repeated numbers per row (1, 22, 333, 4444, 55555).
// Input: An integer n
// Output: Repeated number pattern

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}