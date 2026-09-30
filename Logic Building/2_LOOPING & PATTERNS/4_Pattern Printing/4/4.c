// Q4: Print a square of stars (n x n).
// Input: An integer n
// Output: n x n grid of stars

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}