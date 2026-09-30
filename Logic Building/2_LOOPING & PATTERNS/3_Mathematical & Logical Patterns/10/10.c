// Q10: Print first n terms of a geometric progression (a, r).
// Input: First term a and common ratio r, and n terms
// Output: First n terms of the GP

#include <stdio.h>

int main() {
    int a, r, n, i, term;
    scanf("%d %d %d", &a, &r, &n);
    term = a;
    for (i = 0; i < n; i++) {
        printf("%d ", term);
        term *= r;
    }
    printf("\n");
    return 0;
}