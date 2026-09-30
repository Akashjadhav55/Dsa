// Q3: Print n stars on same line.
// Input: An integer n
// Output: n stars on one line

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
    return 0;
}