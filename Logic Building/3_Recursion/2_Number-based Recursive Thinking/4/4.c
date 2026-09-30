// Q4: Find product of digits of a number recursively.
// Input: An integer
// Output: Product of digits

#include <stdio.h>

int product_of_digits(int n) {
    if (n == 0) {
        return 1;
    }
    return (n % 10) * product_of_digits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", product_of_digits(n));
    return 0;
}