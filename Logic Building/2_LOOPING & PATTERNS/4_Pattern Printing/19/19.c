// Q19: Print alphabet pyramid (A, ABA, ABCBA, ABCDCBA).
// Input: An integer n
// Output: Palindrome alphabet pyramid

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c", (char)(65 + j));
        }
        for (j = i - 1; j >= 0; j--) {
            printf("%c", (char)(65 + j));
        }
        printf("\n");
    }
    return 0;
}