// Q7: Print all prime numbers between 1 and 100.
// Input: None
// Output: All prime numbers from 2 to 100

#include <stdio.h>

int main() {
    int i, j, is_prime;
    for (i = 2; i <= 100; i++) {
        is_prime = 1;
        for (j = 2; j * j <= i; j++) {
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