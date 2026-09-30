// Q4: Find the sum of digits of a number.
// Input: An integer
// Output: Sum of digits

#include <stdio.h>

int main() {
    int n, total = 0;
    scanf("%d", &n);
    while (n) {
        total += n % 10;
        n /= 10;
    }
    printf("%d\n", total);
    return 0;
}