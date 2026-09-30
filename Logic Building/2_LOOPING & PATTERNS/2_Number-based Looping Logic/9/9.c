// Q9: Print Fibonacci series up to n terms.
// Input: An integer n
// Output: First n Fibonacci numbers

#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
    return 0;
}