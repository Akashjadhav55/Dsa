// Q8: Find the second largest element in an array.
// Input: Size n, then n integers
// Output: Second largest element

#include <stdio.h>

int main() {
    int n, i, j, temp, found, unique_count;
    int arr[100];
    int unique[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    unique_count = 0;
    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < unique_count; j++) {
            if (unique[j] == arr[i]) {
                found = 1;
            }
        }
        if (found == 0) {
            unique[unique_count] = arr[i];
            unique_count++;
        }
    }
    for (i = 0; i < unique_count - 1; i++) {
        for (j = 0; j < unique_count - 1 - i; j++) {
            if (unique[j] < unique[j + 1]) {
                temp = unique[j];
                unique[j] = unique[j + 1];
                unique[j + 1] = temp;
            }
        }
    }
    printf("%d\n", unique[1]);
    return 0;
}