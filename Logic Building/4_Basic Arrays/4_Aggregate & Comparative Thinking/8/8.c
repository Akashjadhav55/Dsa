// Q8: Find element-wise product of two arrays.
// Input: Size n, two arrays
// Output: Element-wise product array

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
        printf("%d\n", a[i] * b[i]);
    }
    return 0;
}