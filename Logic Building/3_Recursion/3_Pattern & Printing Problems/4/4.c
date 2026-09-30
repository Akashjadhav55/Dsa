// Q4: Print a triangle of stars recursively (bottom-up).
// Input: An integer n
// Output: Decreasing triangle of stars

#include <stdio.h>

void print_row(int cols) {
    if (cols == 0) {
        return;
    }
    printf("* ");
    print_row(cols - 1);
}

void print_triangle(int n) {
    if (n == 0) {
        return;
    }
    print_row(n);
    printf("\n");
    print_triangle(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_triangle(n);
    return 0;
}