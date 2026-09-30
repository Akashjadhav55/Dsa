// Q9: Calculate the sum of first n odd numbers recursively.
// Input: An integer n
// Output: Sum of first n odd numbers

#include <stdio.h>

int sum_odd(int n) {
    if (n == 0) {
        return 0;
    }
    return (2 * n - 1) + sum_odd(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum_odd(n));
    return 0;
}