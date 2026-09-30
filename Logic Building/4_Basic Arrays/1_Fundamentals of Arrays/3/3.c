// Q3: Find the average of array elements.
// Input: Size n, then n integers
// Output: Average value

#include <stdio.h>

int main() {
    int n, i, total = 0, arr[100];
    double avg;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        total += arr[i];
    }
    avg = (double)total / n;
    printf("%.1f\n", avg);
    return 0;
}