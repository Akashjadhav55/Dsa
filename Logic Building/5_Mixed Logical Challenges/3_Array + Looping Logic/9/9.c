// Q9: Rotate an array by one position to the right.
// Input: Size n, then n integers
// Output: Right-rotated array

#include <stdio.h>

int main() {
    int n, i, last;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    last = arr[n - 1];
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}