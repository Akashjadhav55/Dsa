// Q10: Copy one array to another manually.
// Input: Size n, then n integers
// Output: Copied array

#include <stdio.h>

int main() {
    int n, i;
    int arr[100], copy[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        copy[i] = arr[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", copy[i]);
    }
    return 0;
}