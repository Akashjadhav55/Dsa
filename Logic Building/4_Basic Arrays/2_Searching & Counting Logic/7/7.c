// Q7: Find the sum of odd elements only.
// Input: Size n, then n integers
// Output: Sum of odd elements

#include <stdio.h>

int main() {
    int n, i, x, sum = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        x = arr[i];
        if (x % 2 != 0) {
            sum = sum + x;
        }
    }
    printf("%d\n", sum);
    return 0;
}