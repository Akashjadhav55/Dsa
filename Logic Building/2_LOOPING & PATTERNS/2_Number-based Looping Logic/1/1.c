// Q1: Count the number of digits in a given number.
// Input: An integer
// Output: Number of digits

#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
    }
    while (n != 0) {
        count += 1;
        n /= 10;
    }
    printf("%d\n", count);
    return 0;
}