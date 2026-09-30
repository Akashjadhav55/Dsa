// Q9: Print the sum of all odd digits and even digits separately in a number.
// Input: An integer
// Output: Sum of odd digits and sum of even digits

#include <stdio.h>

int main() {
    int n, digit, odd_sum, even_sum;
    scanf("%d", &n);
    odd_sum = 0;
    even_sum = 0;
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 == 0) {
            even_sum = even_sum + digit;
        } else {
            odd_sum = odd_sum + digit;
        }
        n = n / 10;
    }
    printf("Sum of odd digits: %d\n", odd_sum);
    printf("Sum of even digits: %d\n", even_sum);
    return 0;
}