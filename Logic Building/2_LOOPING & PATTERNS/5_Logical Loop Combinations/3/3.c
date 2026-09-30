// Q3: Print all numbers that are palindromes between 1-500.
// Input: None
// Output: All palindromic numbers 1-500

#include <stdio.h>

int main() {
    int i, original, reversed_num, temp;
    for (i = 1; i <= 500; i++) {
        original = i;
        reversed_num = 0;
        temp = i;
        while (temp != 0) {
            reversed_num = reversed_num * 10 + temp % 10;
            temp = temp / 10;
        }
        if (original == reversed_num) {
            printf("%d\n", i);
        }
    }
    return 0;
}