// Q2: Count how many times a given element appears.
// Input: Size n, n integers, element x
// Output: Count of occurrences

#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}