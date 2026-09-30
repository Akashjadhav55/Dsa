// Q10: Check if a number is perfect (sum of factors equals number).
// Input: An integer
// Output: "Perfect Number" or "Not a Perfect Number"

#include <stdio.h>

int main() {
    int num, i, s = 0;
    scanf("%d", &num);
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            s = s + i;
        }
    }
    if (s == num) {
        printf("Perfect Number\n");
    } else {
        printf("Not a Perfect Number\n");
    }
    return 0;
}