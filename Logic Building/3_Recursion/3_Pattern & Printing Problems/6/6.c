// Q6: Print reverse triangle pattern recursively.
// Input: An integer n
// Output: Reverse triangle

#include <stdio.h>

void print_spaces(int s) {
    if (s == 0) {
        return;
    }
    printf("  ");
    print_spaces(s - 1);
}

void print_stars(int c) {
    if (c == 0) {
        return;
    }
    printf("* ");
    print_stars(c - 1);
}

void print_reverse_triangle(int n, int i) {
    if (i > n) {
        return;
    }
    print_spaces(i - 1);
    print_stars(n - i + 1);
    printf("\n");
    print_reverse_triangle(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_reverse_triangle(n, 1);
    return 0;
}