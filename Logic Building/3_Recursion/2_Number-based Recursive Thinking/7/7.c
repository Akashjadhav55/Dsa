// Q7: Print digits of a number in words recursively (e.g., 123 -> "one two three").
// Input: An integer
// Output: Digits in words

#include <stdio.h>

char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void print_digits_in_words(int n) {
    if (n == 0) {
        return;
    }
    print_digits_in_words(n / 10);
    printf("%s ", words[n % 10]);
}

int main() {
    int n;
    scanf("%d", &n);
    print_digits_in_words(n);
    return 0;
}