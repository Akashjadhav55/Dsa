// Q2: Count how many positive, negative, and zero elements are in an array.
// Input: Size n, then n integers
// Output: Count of each

#include <stdio.h>

int main() {
    int arr[100], n, i, pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos++;
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            neg++;
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zero++;
        }
    }
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);
    return 0;
}