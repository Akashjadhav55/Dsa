// Q6: Reverse an array (without using built-in reverse).
// Input: Size n, then n integers
// Output: Reversed array

#include <stdio.h>

int main() {
    int n, i, left, right, temp;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    left = 0;
    right = n - 1;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}