// Q3: Print a triangle of stars recursively (top-down).
// Input: An integer n
// Output: Increasing triangle of stars

#include <stdio.h>

void print_row(int cols) {
    if (cols == 0) {
        return;
    }
    printf("* ");
    print_row(cols - 1);
}

void print_triangle(int n, int i) {
    if (i > n) {
        return;
    }
    print_row(i);
    printf("\n");
    print_triangle(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_triangle(n, 1);
    return 0;
}