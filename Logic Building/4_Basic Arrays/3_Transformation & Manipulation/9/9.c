// Q9: Swap alternate elements (1st <-> 2nd, 3rd <-> 4th, etc.).
// Input: Size n, then n integers
// Output: Modified array

#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}