// Q2: Print all pairs in an array whose sum equals a given number.
// Input: Size n, n integers, and target sum
// Output: All pairs with the given sum

#include <stdio.h>

int main() {
    int n, i, j, target;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d + %d = %d\n", arr[i], arr[j], target);
            }
        }
    }
    return 0;
}