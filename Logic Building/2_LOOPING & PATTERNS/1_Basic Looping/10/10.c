// Q10: Print the product of digits of a given number.
// Input: An integer
// Output: Product of all digits

#include <stdio.h>

int main() {
    int n, product = 1;
    scanf("%d", &n);
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    printf("%d\n", product);
    return 0;
}