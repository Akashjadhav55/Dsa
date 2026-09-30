// Q4: Print all Armstrong numbers between 1 and 1000.
// Input: None
// Output: Armstrong numbers from 1 to 1000

#include <stdio.h>

int main() {
    int num, temp, digits, d, i, p, s;
    for (num = 1; num <= 1000; num++) {
        temp = num;
        digits = 0;
        while (temp > 0) {
            digits = digits + 1;
            temp = temp / 10;
        }
        temp = num;
        s = 0;
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
            printf("%d\n", num);
        }
    }
    return 0;
}