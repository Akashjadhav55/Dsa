// Q6: Check if a number is a perfect number.
// Input: An integer
// Output: "Perfect Number" or "Not a Perfect Number"

#include <stdio.h>

int main() {
    int n, total = 0, i, diff;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            total += i;
        }
    }
    diff = total - n;
    if (diff == 0) {
        printf("Perfect Number\n");
    } else {
        printf("Not a Perfect Number\n");
    }
    return 0;
}