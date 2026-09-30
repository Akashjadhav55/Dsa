// Q8: Find the count of prime numbers in the array.
// Input: Size n, then n integers
// Output: Count of primes

#include <stdio.h>

int is_prime(int num) {
    int i;
    if (num < 2) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, x, count = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        x = arr[i];
        if (is_prime(x) == 1) {
            count = count + 1;
        }
    }
    printf("%d\n", count);
    return 0;
}