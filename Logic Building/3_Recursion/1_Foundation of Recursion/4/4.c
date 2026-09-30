// Q4: Print only odd numbers from 1 to n recursively.
// Input: An integer n
// Output: Odd numbers from 1 to n

#include <stdio.h>

void print_odd(int i, int n) {
    if (i > n) {
        return;
    }
    if (i % 2 != 0) {
        printf("%d ", i);
    }
    print_odd(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_odd(1, n);
    return 0;
}