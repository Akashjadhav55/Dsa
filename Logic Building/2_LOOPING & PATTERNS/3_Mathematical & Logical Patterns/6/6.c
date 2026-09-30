// Q6: Print all factors of a given number.
// Input: An integer
// Output: All factors of the number

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}