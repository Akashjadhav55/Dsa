// Q7: Print multiplication table of n recursively.
// Input: An integer n
// Output: Table of n

#include <stdio.h>

void print_table(int n, int i) {
    if (i > 10) {
        return;
    }
    printf("%d x %d = %d\n", n, i, n * i);
    print_table(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_table(n, 1);
    return 0;
}