// Q10: Print pattern of characters (A, AB, ABC, ...) recursively.
// Input: An integer n
// Output: Alphabet sequence pattern

#include <stdio.h>

void print_chars(int i) {
    if (i == 0) {
        return;
    }
    print_chars(i - 1);
    printf("%c ", (char)(64 + i));
}

void print_pattern(int n, int i) {
    if (i > n) {
        return;
    }
    print_chars(i);
    printf("\n");
    print_pattern(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_pattern(n, 1);
    return 0;
}