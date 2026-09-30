// Q1: Create a new array containing squares of all numbers.
// Input: Size n, then n integers
// Output: Array of squares

#include <stdio.h>

int main() {
    int n, i, x;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        x = arr[i];
        printf("%d\n", x * x);
    }
    return 0;
}