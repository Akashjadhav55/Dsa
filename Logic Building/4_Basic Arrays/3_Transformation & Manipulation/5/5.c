// Q5: Swap the first and last elements of the array.
// Input: Size n, then n integers
// Output: Modified array

#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}