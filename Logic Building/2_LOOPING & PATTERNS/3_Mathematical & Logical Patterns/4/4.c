// Q4: Find HCF (GCD) of two numbers using loops.
// Input: Two integers
// Output: GCD of the two numbers

#include <stdio.h>

int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    while (b) {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("%d\n", a);
    return 0;
}