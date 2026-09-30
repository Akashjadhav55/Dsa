// Q2: Find the sum of all elements in an array.
// Input: Size n, then n integers
// Output: Sum of elements

#include <stdio.h>

int main() {
    int n, i, total = 0, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        total += arr[i];
    }
    printf("%d\n", total);
    return 0;
}