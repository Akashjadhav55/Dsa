// Q8: Find the index of the maximum element.
// Input: Size n, then n integers
// Output: Index of maximum element

#include <stdio.h>

int main() {
    int n, i, max, idx = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }
    printf("%d\n", idx);
    return 0;
}