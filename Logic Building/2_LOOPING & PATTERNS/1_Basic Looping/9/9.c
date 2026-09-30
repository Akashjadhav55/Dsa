// Q9: Print the factorial of a given number.
// Input: An integer n
// Output: n! (factorial)

#include <stdio.h>

int main() {
    int n, i, fact = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d\n", fact);
    return 0;
}