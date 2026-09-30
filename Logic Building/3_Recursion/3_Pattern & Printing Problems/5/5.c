// Q5: Print pattern of numbers recursively (1 to n each row).
// Input: An integer n
// Output: Number pattern

#include <stdio.h>

void print_nums(int j) {
    if (j == 0) {
        return;
    }
    print_nums(j - 1);
    printf("%d ", j);
}

void print_pattern(int n, int i) {
    if (i > n) {
        return;
    }
    print_nums(i);
    printf("\n");
    print_pattern(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_pattern(n, 1);
    return 0;
}