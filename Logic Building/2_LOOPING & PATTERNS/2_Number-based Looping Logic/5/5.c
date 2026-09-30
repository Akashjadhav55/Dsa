// Q5: Check if a number is an Armstrong number.
// Input: An integer
// Output: "Armstrong Number" or "Not an Armstrong Number"

#include <stdio.h>

int power(int base, int exp) {
    int result = 1, i;
    for (i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n, original, total = 0, digits = 0, d, temp, diff;
    scanf("%d", &n);
    original = n;
    temp = n;
    if (temp == 0) {
        digits = 1;
    }
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    while (n != 0) {
        d = n % 10;
        total += power(d, digits);
        n /= 10;
    }
    diff = total - original;
    if (diff == 0) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
    return 0;
}