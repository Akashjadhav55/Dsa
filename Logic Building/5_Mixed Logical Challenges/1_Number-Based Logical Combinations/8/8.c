// Q8: Print the reverse of a number (123 -> 321).
// Input: An integer
// Output: Reversed number

#include <stdio.h>

int main() {
    int num, rev = 0;
    scanf("%d", &num);
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", rev);
    return 0;
}