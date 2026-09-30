// Q10: Count how many elements are perfect squares.
// Input: Size n, then n integers
// Output: Count of perfect squares

#include <stdio.h>

int is_perfect_square(int num) {
    int i, root = 0;
    if (num < 0) {
        return 0;
    }
    for (i = 1; i * i <= num; i++) {
        root = i;
    }
    if (root * root == num) {
        return 1;
    }
    return 0;
}

int main() {
    int n, i, count = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (is_perfect_square(arr[i]) == 1) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}