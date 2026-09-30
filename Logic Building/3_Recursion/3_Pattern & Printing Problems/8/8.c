// Q8: Print numbers in increasing and decreasing order in same function.
// Input: An integer n
// Output: 1 to n then n to 1

#include <stdio.h>

void print_inc_dec(int n) {
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    print_inc_dec(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_inc_dec(n);
    return 0;
}