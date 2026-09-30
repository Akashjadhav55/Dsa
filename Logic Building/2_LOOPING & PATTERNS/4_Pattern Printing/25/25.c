// Q25: Print number pyramid (1, 232, 34543, 4567654).
// Input: An integer n
// Output: Number pyramid pattern

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d", i + j);
        }
        for (j = i - 2; j >= 0; j--) {
            printf("%d", i + j);
        }
        printf("\n");
    }
    return 0;
}