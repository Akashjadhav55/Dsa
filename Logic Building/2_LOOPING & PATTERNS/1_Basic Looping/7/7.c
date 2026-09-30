// Q7: Print the sum of all even numbers up to n.
// Input: An integer n
// Output: Sum of all even numbers from 2 to n

#include <stdio.h>

int main() {
    int n, i, total = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        total += i;
    }
    printf("%d\n", total);
    return 0;
}