// Q5: Shift all zeros to the end of the array.
// Input: Size n, then n integers
// Output: Array with zeros at end

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int non_zero[100];
    int zeros[100];
    int result[200];
    int non_zero_count, zero_count;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    non_zero_count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            non_zero[non_zero_count] = arr[i];
            non_zero_count++;
        }
    }
    zero_count = n - non_zero_count;
    for (i = 0; i < zero_count; i++) {
        zeros[i] = 0;
    }
    for (i = 0; i < non_zero_count; i++) {
        result[i] = non_zero[i];
    }
    for (i = 0; i < zero_count; i++) {
        result[non_zero_count + i] = zeros[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}