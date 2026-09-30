// Q2: Create a new array containing only even elements.
// Input: Size n, then n integers
// Output: Array of even elements

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
        if (x % 2 == 0) {
            printf("%d\n", x);
        }
    }
    return 0;
}