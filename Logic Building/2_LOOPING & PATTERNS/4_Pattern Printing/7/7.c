// Q7: Print stars in even numbers (2, 4, 6, 8, 10).
// Input: An integer n
// Output: Rows with 2, 4, 6... stars

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < 2 * i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}