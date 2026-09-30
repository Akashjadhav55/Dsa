// Q3: Print only even numbers from 1 to n recursively.
// Input: An integer n
// Output: Even numbers from 1 to n

#include <stdio.h>

void print_even(int i, int n) {
    if (i > n) {
        return;
    }
    if (i % 2 == 0) {
        printf("%d ", i);
    }
    print_even(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_even(1, n);
    return 0;
}