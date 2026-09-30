// Q9: Print sum of series 1 + 2 + 3 + ... + n recursively and display each step.
// Input: An integer n
// Output: Running sum at each step

#include <stdio.h>

int print_series(int n) {
    if (n == 0) {
        return 0;
    }
    return n + print_series(n - 1);
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" + ");
        }
        printf("%d", i);
    }
    printf(" = %d\n", print_series(n));
    return 0;
}