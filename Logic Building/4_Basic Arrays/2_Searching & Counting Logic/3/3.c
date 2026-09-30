// Q3: Find the first occurrence of a given number.
// Input: Size n, n integers, element x
// Output: Index of first occurrence (-1 if not found)

#include <stdio.h>

int main() {
    int n, i, x, idx = -1;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            idx = i;
            break;
        }
    }
    printf("%d\n", idx);
    return 0;
}