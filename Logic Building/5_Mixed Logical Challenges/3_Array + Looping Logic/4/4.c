// Q4: Reverse an array in-place.
// Input: Size n, then n integers
// Output: Reversed array

#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    i = 0;
    j = n - 1;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
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