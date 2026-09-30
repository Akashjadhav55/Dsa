// Q7: Count how many elements are even and odd.
// Input: Size n, then n integers
// Output: Count of even and odd

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    return 0;
}