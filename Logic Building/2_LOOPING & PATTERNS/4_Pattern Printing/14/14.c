// Q14: Print single digit repeating pattern (1, 11, 111, 1111).
// Input: An integer n
// Output: Repeating digit pattern

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}