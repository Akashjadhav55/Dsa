// Q9: Generate Fibonacci series up to N using recursion.
// Input: An integer N
// Output: Fibonacci series up to N

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int result[100], limit, i, k = 0, val;
    scanf("%d", &limit);
    i = 0;
    while (1) {
        val = fibonacci(i);
        if (val > limit) {
            break;
        }
        result[k] = val;
        k++;
        i++;
    }
    for (i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}