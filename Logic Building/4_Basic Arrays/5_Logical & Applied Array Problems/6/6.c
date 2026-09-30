// Q6: Find the sum of all elements except the largest and smallest.
// Input: Size n, then n integers
// Output: Sum excluding max and min

#include <stdio.h>

int main() {
    int n, i, x, sum = 0, max, min;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++) {
        x = arr[i];
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
        sum = sum + x;
    }
    printf("%d\n", sum - max - min);
    return 0;
}