// Q1: Compare two arrays - check if they are equal (same elements and order).
// Input: Size n, two arrays of n elements
// Output: "Equal" or "Not Equal"

#include <stdio.h>

int main() {
    int a[100], b[100], n, i, same;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    same = 1;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            same = 0;
        }
    }
    if (same == 1) {
        printf("Equal\n");
    } else {
        printf("Not Equal\n");
    }
    return 0;
}