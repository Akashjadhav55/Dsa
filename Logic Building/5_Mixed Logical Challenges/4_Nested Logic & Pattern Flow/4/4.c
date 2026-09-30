// Q4: Check if an array is sorted (ascending or descending).
// Input: Size n, then n integers
// Output: "Ascending", "Descending", or "Not Sorted"

#include <stdio.h>

int main() {
    int n, i, asc, desc;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    asc = 1;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            asc = 0;
        }
    }
    desc = 1;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            desc = 0;
        }
    }
    if (asc == 1) {
        printf("Ascending\n");
    } else if (desc == 1) {
        printf("Descending\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}