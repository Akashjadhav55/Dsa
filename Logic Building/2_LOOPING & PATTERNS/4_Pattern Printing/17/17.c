// Q17: Print repeated alphabet per row (A, BB, CCC, DDDD).
// Input: An integer n
// Output: Repeated alphabet pattern

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", (char)(65 + i));
        }
        printf("\n");
    }
    return 0;
}