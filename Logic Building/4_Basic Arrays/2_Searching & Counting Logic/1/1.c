// Q1: Input an element x - check if it exists in the array.
// Input: Size n, n integers, element x
// Output: "Found" or "Not Found"

#include <stdio.h>

int main() {
    int n, i, x, found = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
        }
    }
    if (found == 1) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }
    return 0;
}