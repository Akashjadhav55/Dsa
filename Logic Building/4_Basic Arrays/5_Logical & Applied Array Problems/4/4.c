// Q4: Find the second smallest element in an array.
// Input: Size n, then n integers
// Output: Second smallest element

#include <stdio.h>

int main() {
    int n, i, j, x, found, distinct = 0, temp;
    int unique[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        found = 0;
        for (j = 0; j < distinct; j++) {
            if (unique[j] == x) {
                found = 1;
            }
        }
        if (found == 0) {
            unique[distinct] = x;
            distinct++;
        }
    }
    for (i = 0; i < distinct; i++) {
        for (j = 0; j < distinct - i - 1; j++) {
            if (unique[j] > unique[j + 1]) {
                temp = unique[j];
                unique[j] = unique[j + 1];
                unique[j + 1] = temp;
            }
        }
    }
    if (distinct >= 2) {
        printf("%d\n", unique[1]);
    } else {
        printf("Not enough unique elements\n");
    }
    return 0;
}