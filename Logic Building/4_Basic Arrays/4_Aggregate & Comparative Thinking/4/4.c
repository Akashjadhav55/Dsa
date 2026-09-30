// Q4: Find the common elements between two arrays.
// Input: Size n and m, two arrays
// Output: Common elements

#include <stdio.h>

int main() {
    int a[100], b[100], used[100], n, m, i, j, k, found;
    scanf("%d", &n);
    k = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        for (j = 0; j < k; j++) {
            if (a[j] == a[i]) {
                break;
            }
        }
        if (j == k) {
            a[k] = a[i];
            used[k] = 0;
            k++;
        }
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++) {
        found = -1;
        for (j = 0; j < k; j++) {
            if (used[j] == 0 && a[j] == b[i]) {
                found = j;
                break;
            }
        }
        if (found != -1) {
            used[found] = 1;
            printf("%d\n", b[i]);
        }
    }
    return 0;
}