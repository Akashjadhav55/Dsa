// Q7: Print a pattern where each row i prints i*i.
// Input: An integer n
// Output: Pattern of squares

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", i * i);
    }
    return 0;
}