// Q1: Print all numbers between 1 and N that are divisible by both 3 and 5.
// Input: An integer N
// Output: Numbers divisible by 15

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}