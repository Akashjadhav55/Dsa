// Q7: Find element-wise sum of two arrays (A[i] + B[i]).
// Input: Size n, two arrays
// Output: Element-wise sum array

#include <stdio.h>

int main() {
    int n, i;
    int a[100], b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i] + b[i]);
    }
    return 0;
}