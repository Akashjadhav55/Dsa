// Q10: Print numbers in a spiral-like pattern (conceptual dry run).
// Input: An integer n
// Output: Spiral number pattern

#include <stdio.h>

int main() {
    int n, i, j, num;
    int matrix[50][50];
    int top, bottom, left, right;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
    num = 1;
    top = 0;
    bottom = n - 1;
    left = 0;
    right = n - 1;
    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++) {
            matrix[top][i] = num;
            num++;
        }
        top++;
        for (i = top; i <= bottom; i++) {
            matrix[i][right] = num;
            num++;
        }
        right--;
        if (top <= bottom) {
            for (i = right; i >= left; i--) {
                matrix[bottom][i] = num;
                num++;
            }
            bottom--;
        }
        if (left <= right) {
            for (i = bottom; i >= top; i--) {
                matrix[i][left] = num;
                num++;
            }
            left++;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}