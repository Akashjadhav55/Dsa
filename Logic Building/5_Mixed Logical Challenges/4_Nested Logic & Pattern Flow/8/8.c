// Q8: Print Pascal's triangle up to N rows.
// Input: An integer N
// Output: Pascal's triangle

#include <stdio.h>

int main() {
    int n, i, j, val;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        val = 1;
        for (j = 0; j < i + 1; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}