// Q3: Check if a number is a palindrome using recursion.
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

#include <stdio.h>

int is_palindrome(int n, int original, int rev) {
    if (n == 0) {
        return original == rev;
    }
    return is_palindrome(n / 10, original, rev * 10 + n % 10);
}

int main() {
    int n;
    scanf("%d", &n);
    if (is_palindrome(n, n, 0) == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}