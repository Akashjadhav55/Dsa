// Q1: Count the number of digits in a number recursively.
// Input: An integer
// Output: Number of digits

#include <stdio.h>

int count_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + count_digits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", count_digits(n));
    return 0;
}