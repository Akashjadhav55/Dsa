// Q5: Count how many times a number appears consecutively in an array.
// Input: Size n, then n integers
// Output: Consecutive occurrence counts

#include <stdio.h>

int main() {
    int arr[100], n, i, count = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            count++;
        } else {
            printf("%d appears %d times\n", arr[i-1], count);
            count = 1;
        }
    }
    printf("%d appears %d times\n", arr[n-1], count);
    return 0;
}