// Q5: Find the difference between the largest and smallest element.
// Input: Size n, then n integers
// Output: Difference (max - min)

#include <stdio.h>

int main() {
    int n, i, max, min;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d\n", max - min);
    return 0;
}