// Q2: Print a square of stars recursively (n x n).
// Input: An integer n
// Output: n x n grid of stars

#include <stdio.h>

void print_row(int cols) {
    if (cols == 0) {
        return;
    }
    printf("* ");
    print_row(cols - 1);
}

void print_square(int rows, int cols) {
    if (rows == 0) {
        return;
    }
    print_row(cols);
    printf("\n");
    print_square(rows - 1, cols);
}

int main() {
    int n;
    scanf("%d", &n);
    print_square(n, n);
    return 0;
}