// Q2: Compare two arrays - check if they contain the same elements (ignore order).
// Input: Size n, two arrays of n elements
// Output: "Same Elements" or "Different Elements"

#include <stdio.h>

int main() {
    int a[100], b[100], n, i, j, temp, same;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    same = 1;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            same = 0;
        }
    }
    if (same == 1) {
        printf("Same Elements\n");
    } else {
        printf("Different Elements\n");
    }
    return 0;
}