// Q18: Print increasing alphabet per row (A, AB, ABC, ABCD, ABCDE).
// Input: An integer n
// Output: Increasing alphabet pattern

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", (char)(65 + j));
        }
        printf("\n");
    }
    return 0;
}