// Q7: Rotate an array by one position to the left.
// Input: Size n, then n integers
// Output: Left-rotated array

#include <stdio.h>

int main() {
    int n, i, first;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    first = arr[0];
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}