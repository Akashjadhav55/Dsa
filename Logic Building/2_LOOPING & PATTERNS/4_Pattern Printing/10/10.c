// Q10: Print stars and spaces alternating.
// Input: An integer n
// Output: Alternating star-space pattern in pyramid shape

#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (k = 0; k < i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}