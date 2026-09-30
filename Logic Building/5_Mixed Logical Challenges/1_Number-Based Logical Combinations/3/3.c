// Q3: Check if a number is an Armstrong number.
// Input: An integer
// Output: "Armstrong Number" or "Not an Armstrong Number"

#include <stdio.h>

int main() {
    int num, temp, digits, d, i, p, s = 0;
    scanf("%d", &num);
    temp = num;
    digits = 0;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits = digits + 1;
            temp = temp / 10;
        }
    }
    temp = num;
    while (temp > 0) {
        d = temp % 10;
        p = 1;
        for (i = 0; i < digits; i++) {
            p = p * d;
        }
        s = s + p;
        temp = temp / 10;
    }
    if (s == num) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
    return 0;
}