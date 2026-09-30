// Q6: Count how many elements are common between two arrays.
// Input: Size n and m, two arrays
// Output: Count of common elements

#include <stdio.h>

int main() {
    int n, m, i, j, k, x, count = 0, found;
    int a[100], b[100];
    int used[100];
    scanf("%d", &n);
    k = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        found = 0;
        for (j = 0; j < k; j++) {
            if (a[j] == x) {
                found = 1;
            }
        }
        if (found == 0) {
            a[k] = x;
            used[k] = 0;
            k++;
        }
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (used[j] == 0 && a[j] == b[i]) {
                used[j] = 1;
                found = 1;
            }
        }
        if (found == 1) {
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}