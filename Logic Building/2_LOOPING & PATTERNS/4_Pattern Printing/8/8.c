// Q8: Print stars in odd numbers (1, 3, 5, 7, 9).
// Input: An integer n
// Output: Rows with 1, 3, 5... stars

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}