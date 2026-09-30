// Q8: Print the sum of all odd numbers up to n.
// Input: An integer n
// Output: Sum of all odd numbers from 1 to n

#include <stdio.h>

int main() {
    int n, i, total = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2) {
        total += i;
    }
    printf("%d\n", total);
    return 0;
}