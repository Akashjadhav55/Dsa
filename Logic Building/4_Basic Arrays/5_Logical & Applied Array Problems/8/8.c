// Q8: Count how many elements are greater than the average of the array.
// Input: Size n, then n integers
// Output: Count of elements above average

#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    double sum = 0, avg;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;
    for (i = 0; i < n; i++) {
        x = arr[i];
        if (x > avg) {
            count = count + 1;
        }
    }
    printf("%d\n", count);
    return 0;
}