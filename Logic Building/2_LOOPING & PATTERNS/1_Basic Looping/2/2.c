// Q2: Print all even numbers between 1 and 100.
// Input: None
// Output: All even numbers from 2 to 100

#include <stdio.h>

int main() {
    int i;
    for (i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}