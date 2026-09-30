// Q1: Given marks of students, find how many passed (>= 40).
// Input: Number of students, then their marks
// Output: Count of students who passed

#include <stdio.h>

int main() {
    int marks[100], n, i, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < n; i++) {
        if (marks[i] >= 40) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}