// Q7: Find the sum of all factors of a number.
// Input: An integer
// Output: Sum of all factors

#include <stdio.h>

int main() {
    int n, i, total = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            total += i;
        }
    }
    printf("%d\n", total);
    return 0;
}