// Q6: Print the sum of first n natural numbers.
// Input: An integer n
// Output: Sum of 1+2+...+n

#include <stdio.h>

int main() {
    int n, i, total = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        total += i;
    }
    printf("%d\n", total);
    return 0;
}