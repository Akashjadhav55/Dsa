// Q6: Count how many elements are even at an even index.
// Input: Size n, then n integers
// Output: Count

#include <stdio.h>

int main() {
    int n, i, count;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    count = 0;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0 && arr[i] % 2 == 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}