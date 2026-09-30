// Q10: Take 5 numbers as input. If user enters 0, skip it. Print sum of all non-zero numbers.
// Input: 5 integers
// Output: Sum of non-zero numbers

#include <stdio.h>

int main() {
    int i, n, total = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n != 0) {
            total += n;
        }
    }
    printf("%d\n", total);
    return 0;
}