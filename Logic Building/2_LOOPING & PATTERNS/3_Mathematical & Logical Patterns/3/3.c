// Q3: Print all numbers between a and b divisible by 7.
// Input: Two integers a and b
// Output: Numbers between a and b divisible by 7

#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}