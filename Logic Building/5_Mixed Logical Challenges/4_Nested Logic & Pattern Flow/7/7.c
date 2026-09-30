// Q7: Print pattern of increasing characters (A, AB, ABC...).
// Input: An integer n
// Output: Alphabet sequence pattern

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", (char)('A' + j));
        }
        printf("\n");
    }
    return 0;
}