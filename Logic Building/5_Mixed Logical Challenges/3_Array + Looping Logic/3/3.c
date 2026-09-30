// Q3: Print all unique elements from an array.
// Input: Size n, then n integers
// Output: Unique elements

#include <stdio.h>

int main() {
    int arr[100], result[100], n, i, j, count, k = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == 1) {
            result[k] = arr[i];
            k++;
        }
    }
    for (i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}