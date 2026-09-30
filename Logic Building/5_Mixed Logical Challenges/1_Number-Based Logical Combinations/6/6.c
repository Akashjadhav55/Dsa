// Q6: Count how many even digits a number contains.
// Input: An integer
// Output: Count of even digits

#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    while (num > 0) {
        if ((num % 10) % 2 == 0) {
            count += 1;
        }
        num /= 10;
    }
    printf("%d\n", count);
    return 0;
}