// Q10: Print all unique elements (those that occur exactly once).
// Input: Size n, then n integers
// Output: Elements that occur exactly once

#include <stdio.h>

int main() {
    int n, i, j, idx, distinct = 0;
    int arr[100];
    int keys[100], freq[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        idx = -1;
        for (j = 0; j < distinct; j++) {
            if (keys[j] == arr[i]) {
                idx = j;
            }
        }
        if (idx == -1) {
            keys[distinct] = arr[i];
            freq[distinct] = 1;
            distinct++;
        } else {
            freq[idx]++;
        }
    }
    for (i = 0; i < distinct; i++) {
        if (freq[i] == 1) {
            printf("%d\n", keys[i]);
        }
    }
    return 0;
}