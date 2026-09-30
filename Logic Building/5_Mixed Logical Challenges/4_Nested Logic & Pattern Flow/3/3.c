// Q3: Print all subarrays of a given array.
// Input: Size n, then n integers
// Output: All possible subarrays

#include <stdio.h>

int main() {
    int n, i, j, k;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            printf("[");
            for (k = i; k <= j; k++) {
                printf("%d", arr[k]);
                if (k < j) {
                    printf(", ");
                }
            }
            printf("]\n");
        }
    }
    return 0;
}