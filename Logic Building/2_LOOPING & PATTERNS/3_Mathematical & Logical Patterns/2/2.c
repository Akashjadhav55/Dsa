// Q2: Print cubes of numbers from 1 to n.
// Input: An integer n
// Output: Cubes of 1 to n

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", i * i * i);
    }
    return 0;
}