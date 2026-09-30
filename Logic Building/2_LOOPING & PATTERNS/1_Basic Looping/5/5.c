// Q5: Print the table of a given number (n x 1 to n x 10).
// Input: An integer n
// Output: Multiplication table of n

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}