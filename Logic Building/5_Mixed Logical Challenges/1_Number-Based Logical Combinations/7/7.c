// Q7: Print all prime numbers between 1 and N.
// Input: An integer N
// Output: All primes from 1 to N

#include <stdio.h>

int main() {
    int n, i, j, is_prime, limit;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        is_prime = 1;
        limit = 0;
        while ((limit + 1) * (limit + 1) <= i) {
            limit += 1;
        }
        for (j = 2; j <= limit; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d\n", i);
        }
    }
    return 0;
}