// Q1: Input n and take n integers into an array; print them.
// Input: Size n, then n integers
// Output: All n elements

#include <stdio.h>

int main() {
    int n, i, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}