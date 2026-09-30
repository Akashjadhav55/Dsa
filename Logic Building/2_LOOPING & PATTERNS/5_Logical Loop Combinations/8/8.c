// Q8: Print factorial of each number from 1 to n.
// Input: An integer n
// Output: Factorials of 1 to n

#include <stdio.h>

int main() {
    int n, i, fact;
    scanf("%d", &n);
    fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
        printf("%d! = %d\n", i, fact);
    }
    return 0;
}