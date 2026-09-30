// Q1: Print numbers from 1 to n using recursion.
// Input: An integer n
// Output: Numbers 1 to n

#include <stdio.h>

void print_1_to_n(int n) {
    if (n == 0) {
        return;
    }
    print_1_to_n(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_1_to_n(n);
    return 0;
}