// Q7: Find common elements between two arrays.
// Input: Size n and m, two arrays
// Output: Common elements

#include <stdio.h>

int main() {
    int n, m, i, j, k, inB, already;
    int a[100], b[100], common[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    k = 0;
    for (i = 0; i < n; i++) {
        inB = 0;
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                inB = 1;
            }
        }
        already = 0;
        for (j = 0; j < k; j++) {
            if (common[j] == a[i]) {
                already = 1;
            }
        }
        if (inB == 1 && already == 0) {
            common[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k; i++) {
        printf("%d", common[i]);
        if (i < k - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}