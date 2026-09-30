// Q10: Print sum of first n terms of Fibonacci series.
// Input: An integer n
// Output: Sum of first n Fibonacci numbers

#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, total = 0, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        total += a;
        temp = a;
        a = b;
        b = temp + b;
    }
    printf("%d\n", total);
    return 0;
}