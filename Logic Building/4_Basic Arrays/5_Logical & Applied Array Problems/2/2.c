// Q2: Check if the array is sorted in descending order.
// Input: Size n, then n integers
// Output: "Sorted" or "Not Sorted"

#include <stdio.h>

int main() {
    int n, i, j, temp, same;
    int arr[100], sorted_arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sorted_arr[i] = arr[i];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (sorted_arr[j] < sorted_arr[j + 1]) {
                temp = sorted_arr[j];
                sorted_arr[j] = sorted_arr[j + 1];
                sorted_arr[j + 1] = temp;
            }
        }
    }
    same = 1;
    for (i = 0; i < n; i++) {
        if (arr[i] != sorted_arr[i]) {
            same = 0;
        }
    }
    if (same == 1) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}