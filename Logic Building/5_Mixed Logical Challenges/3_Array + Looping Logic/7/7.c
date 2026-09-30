// Q7: Merge two arrays into one.
// Input: Size n and m, two arrays
// Output: Merged array

#include <stdio.h>

int main() {
    int n, m, i, j;
    int a[100];
    int b[100];
    int result[200];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        result[i] = a[i];
    }
    for (j = 0; j < m; j++) {
        result[n + j] = b[j];
    }
    for (i = 0; i < n + m; i++) {
        printf("%d", result[i]);
        if (i < n + m - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}