// Q9: Print first n terms of an arithmetic progression (a, d).
// Input: First term a and common difference d, and n terms
// Output: First n terms of the AP

#include <stdio.h>

int main() {
    int a, d, n, i;
    scanf("%d %d %d", &a, &d, &n);
    for (i = 0; i < n; i++) {
        printf("%d ", a + i * d);
    }
    printf("\n");
    return 0;
}