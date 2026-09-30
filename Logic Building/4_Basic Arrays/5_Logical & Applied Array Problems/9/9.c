// Q9: Print the frequency of each distinct element.
// Input: Size n, then n integers
// Output: Each element and its frequency

#include <stdio.h>

int main() {
    int n, i, j, x, found, size = 0;
    int arr[100];
    int keys[100], counts[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        x = arr[i];
        found = 0;
        for (j = 0; j < size; j++) {
            if (keys[j] == x) {
                counts[j] = counts[j] + 1;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            keys[size] = x;
            counts[size] = 1;
            size = size + 1;
        }
    }
    for (i = 0; i < size; i++) {
        printf("%d %d\n", keys[i], counts[i]);
    }
    return 0;
}