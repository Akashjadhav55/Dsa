// Q5: Find elements that are in one array but not in the other.
// Input: Size n and m, two arrays
// Output: Elements only in first array

#include <stdio.h>

int contains(int b[], int m, int x) {
    int i;
    for (i = 0; i < m; i++) {
        if (b[i] == x) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, m, i;
    int a[100], b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        if (contains(b, m, a[i]) == 0) {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}