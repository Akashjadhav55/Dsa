// Q13: Print consecutive numbers pattern (1, 23, 456, 78910).
// Input: An integer n
// Output: Continuous number pattern

#include <stdio.h>

int main() {
    int n, i, j, num;
    scanf("%d", &n);
    num = 1;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}