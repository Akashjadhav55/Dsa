// Q2: Find the sum of digits of a number (use loop).
// Input: An integer
// Output: Sum of digits

#include <stdio.h>

int main() {
    int num, s = 0;
    scanf("%d", &num);
    while (num > 0) {
        s = s + num % 10;
        num = num / 10;
    }
    printf("%d\n", s);
    return 0;
}