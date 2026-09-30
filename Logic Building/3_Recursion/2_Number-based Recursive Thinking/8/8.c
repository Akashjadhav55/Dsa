// Q8: Calculate the sum of first n even numbers recursively.
// Input: An integer n
// Output: Sum of first n even numbers

#include <stdio.h>

int sum_even(int n) {
    if (n == 0) {
        return 0;
    }
    return (2 * n) + sum_even(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum_even(n));
    return 0;
}