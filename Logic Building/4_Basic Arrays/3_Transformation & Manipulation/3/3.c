// Q3: Replace every negative number with 0.
// Input: Size n, then n integers
// Output: Modified array

#include <stdio.h>

int main() {
    int n, i, x;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        x = arr[i];
        if (x < 0) {
            x = 0;
        }
        arr[i] = x;
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