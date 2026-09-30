// Q9: Find the index of the minimum element.
// Input: Size n, then n integers
// Output: Index of minimum element

#include <stdio.h>

int main() {
    int n, i, min, idx = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            idx = i;
        }
    }
    printf("%d\n", idx);
    return 0;
}