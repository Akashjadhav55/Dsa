// Q9: Create a frequency array of numbers (count occurrence of each number).
// Input: Size n, then n integers
// Output: Frequency of each element

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
        printf("%d -> %d\n", keys[i], freq[i]);
    }
    return 0;
}