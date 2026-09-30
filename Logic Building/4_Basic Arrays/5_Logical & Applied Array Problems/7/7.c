// Q7: Count how many pairs of elements have a sum equal to a given number k.
// Input: Size n, n integers, and value k
// Output: Count of pairs

#include <stdio.h>

int main() {
    int n, i, j, k, count = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                count = count + 1;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}