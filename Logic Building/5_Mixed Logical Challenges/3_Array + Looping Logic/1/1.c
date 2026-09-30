// Q1: Find the maximum and minimum element in an array.
// Input: Size n, then n integers
// Output: Maximum and minimum

#include <stdio.h>

int main() {
    int arr[100], n, i, max, min;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}