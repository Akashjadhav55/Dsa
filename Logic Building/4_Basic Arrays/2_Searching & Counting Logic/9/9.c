// Q9: Count how many numbers are divisible by 3 and 5 both.
// Input: Size n, then n integers
// Output: Count of numbers divisible by 15

#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        x = arr[i];
        if (x % 3 == 0 && x % 5 == 0) {
            count = count + 1;
        }
    }
    printf("%d\n", count);
    return 0;
}