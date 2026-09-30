// Q10: Take n elements and print only those greater than a given value k.
// Input: Size n, n integers, and value k
// Output: Elements greater than k

#include <stdio.h>

int main() {
    int n, i, k, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        if (arr[i] > k) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}