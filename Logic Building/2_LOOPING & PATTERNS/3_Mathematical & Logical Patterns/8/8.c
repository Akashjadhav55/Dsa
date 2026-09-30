// Q8: Check if a number is a strong number (sum of factorials of digits = number).
// Input: An integer
// Output: "Strong Number" or "Not a Strong Number"

#include <stdio.h>

int main() {
    int n, original, total = 0, digit, fact, i;
    scanf("%d", &n);
    original = n;
    while (n) {
        digit = n % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        total += fact;
        n /= 10;
    }
    if (total - original) {
        printf("Not a Strong Number\n");
    } else {
        printf("Strong Number\n");
    }
    return 0;
}