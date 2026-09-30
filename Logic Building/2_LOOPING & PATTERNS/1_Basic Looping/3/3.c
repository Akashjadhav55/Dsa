// Q3: Print all odd numbers between 1 and 100.
// Input: None
// Output: All odd numbers from 1 to 99

#include <stdio.h>

int main() {
    int i;
    for (i = 1; i < 100; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}