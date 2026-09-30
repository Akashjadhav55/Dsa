// Q4: Replace all even numbers with 1 and all odd with 0.
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
        if (x % 2 == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}