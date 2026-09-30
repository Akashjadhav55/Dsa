// Q10: Find sum of digits of a number recursively.
// Input: An integer
// Output: Sum of digits

#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum_of_digits(n));
    return 0;
}