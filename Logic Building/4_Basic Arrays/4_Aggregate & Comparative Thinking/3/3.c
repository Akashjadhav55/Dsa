// Q3: Merge two arrays into a third array.
// Input: Size n and m, two arrays
// Output: Merged array

#include <stdio.h>

int main() {
    int a[100], b[100], merged[200], n, m, i, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    k = 0;
    for (i = 0; i < n; i++) {
        merged[k] = a[i];
        k++;
    }
    for (i = 0; i < m; i++) {
        merged[k] = b[i];
        k++;
    }
    for (i = 0; i < n + m; i++) {
        printf("%d\n", merged[i]);
    }
    return 0;
}