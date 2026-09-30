// Q9: Count how many prime numbers are there in an array.
// Input: Size n, then n integers
// Output: Count of primes

#include <stdio.h>

int is_prime(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, count;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    count = 0;
    for (i = 0; i < n; i++) {
        if (is_prime(arr[i]) == 1) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}