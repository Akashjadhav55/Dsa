// Q5: Check if all elements in an array are unique.
// Input: Size n, then n integers
// Output: "All Unique" or "Has Duplicates"

#include <stdio.h>

int main() {
    int n, i, j, dup = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                dup = 1;
            }
        }
    }
    if (dup == 0) {
        printf("All Unique\n");
    } else {
        printf("Has Duplicates\n");
    }
    return 0;
}