// Q4: Print numbers between 1-100 whose digits add up to a multiple of 3.
// Input: None
// Output: Numbers with digit sum divisible by 3

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
        if (digit_sum % 3 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}