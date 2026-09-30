// Q3: Check if a number is a palindrome.
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

#include <stdio.h>

int main() {
    int n, original, reversed = 0, diff;
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    diff = original - reversed;
    if (diff == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}