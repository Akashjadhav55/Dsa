// Q10: Find the sum of all elements at odd indices.
// Input: Size n, then n integers
// Output: Sum of elements at odd indices

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i += 2) {
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}