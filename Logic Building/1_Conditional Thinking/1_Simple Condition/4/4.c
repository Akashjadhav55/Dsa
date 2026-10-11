// Q4: Check if a number is divisible by both 3 and 5.
// Input: A single integer
// Output: "Divisible by both 3 and 5" or "Not divisible by both"

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("Divisible by both 3 and 5");
    } else {
        printf("Not divisible by both");
    }

    return 0;
}