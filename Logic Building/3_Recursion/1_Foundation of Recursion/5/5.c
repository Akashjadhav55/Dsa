// Q5: Print sum of first n natural numbers recursively.
// Input: An integer n
// Output: Sum of 1+2+...+n

#include <stdio.h>

int sum_n(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum_n(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum_n(n));
    return 0;
}