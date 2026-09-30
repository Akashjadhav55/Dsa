// Q6: Count how many elements are positive, negative, or zero.
// Input: Size n, then n integers
// Output: Count of positive, negative, and zero

#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, zero = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);
    return 0;
}