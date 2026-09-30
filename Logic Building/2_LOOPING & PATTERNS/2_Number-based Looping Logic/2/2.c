// Q2: Print the reverse of a given number.
// Input: An integer
// Output: Reversed number

#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);
    while (n) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", reversed);
    return 0;
}