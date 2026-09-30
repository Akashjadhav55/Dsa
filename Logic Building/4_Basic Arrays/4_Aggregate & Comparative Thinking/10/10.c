// Q10: Print all elements that appear more than once.
// Input: Size n, then n integers
// Output: Duplicate elements

#include <stdio.h>

int main() {
    int arr[100], keys[100], freq[100], n, i, j, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            if (keys[j] == arr[i]) {
                freq[j]++;
                break;
            }
        }
        if (j == k) {
            keys[k] = arr[i];
            freq[k] = 1;
            k++;
        }
    }
    for (i = 0; i < k; i++) {
        if (freq[i] > 1) {
            printf("%d\n", keys[i]);
        }
    }
    return 0;
}