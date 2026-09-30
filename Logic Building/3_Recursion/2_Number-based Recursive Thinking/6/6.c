// Q6: Convert a number to binary recursively.
// Input: An integer
// Output: Binary representation

#include <stdio.h>

void to_binary(int n, char *result) {
    char prefix[100];
    if (n <= 1) {
        sprintf(result, "%d", n);
        return;
    }
    to_binary(n / 2, prefix);
    sprintf(result, "%s%d", prefix, n % 2);
}

int main() {
    int n;
    char binary[200];
    scanf("%d", &n);
    to_binary(n, binary);
    printf("%s\n", binary);
    return 0;
}