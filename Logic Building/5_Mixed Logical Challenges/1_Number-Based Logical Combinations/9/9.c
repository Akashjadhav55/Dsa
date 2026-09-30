// Q9: Check if a number is palindrome (121 -> true).
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

#include <stdio.h>

int main() {
    int num, temp, rev = 0;
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (num == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}