// Q1: Print all numbers whose sum of digits is even (1-100).
// Input: None
// Output: Numbers 1-100 with even digit sum

#include <stdio.h>

int main() {
    int i, digit_sum, temp;
    for (i = 1; i <= 100; i++) {
        digit_sum = 0;
        temp = i;
        while (temp != 0) {
            digit_sum += temp % 10;
            temp = temp / 10;
        }
        if (digit_sum % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}