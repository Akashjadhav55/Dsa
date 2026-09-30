// Q5: Find LCM of two numbers using loops.
// Input: Two integers
// Output: LCM of the two numbers

#include <stdio.h>

int main() {
    int a, b, max_val;
    scanf("%d %d", &a, &b);
    max_val = (a > b) ? a : b;
    while (1) {
        if (max_val % a == 0 && max_val % b == 0) {
            printf("%d\n", max_val);
            break;
        }
        max_val++;
    }
    return 0;
}