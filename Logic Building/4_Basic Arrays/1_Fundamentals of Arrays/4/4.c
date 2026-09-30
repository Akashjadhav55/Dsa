// Q4: Find the maximum element in an array.
// Input: Size n, then n integers
// Output: Maximum element

#include <stdio.h>

int main() {
    int n, i, max, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d\n", max);
    return 0;
}