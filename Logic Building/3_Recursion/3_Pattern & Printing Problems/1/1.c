// Q1: Print a line of n stars recursively.
// Input: An integer n
// Output: A line of n stars

#include <stdio.h>

void print_stars(int n) {
    if (n == 0) {
        return;
    }
    printf("* ");
    print_stars(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_stars(n);
    return 0;
}