// Q5: Find the smallest and largest digit in a given number.
// Input: An integer
// Output: Smallest and largest digit

#include <stdio.h>

int main() {
    int n, smallest, largest, digit;
    scanf("%d", &n);
    smallest = 9;
    largest = 0;
    while (n != 0) {
        digit = n % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        if (digit > largest) {
            largest = digit;
        }
        n = n / 10;
    }
    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
    return 0;
}