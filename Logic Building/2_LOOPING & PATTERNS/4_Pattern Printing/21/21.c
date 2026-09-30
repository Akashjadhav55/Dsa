// Q21: Print palindromic number triangle (1, 21, 321, 4321).
// Input: An integer n
// Output: Decreasing number triangle

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}