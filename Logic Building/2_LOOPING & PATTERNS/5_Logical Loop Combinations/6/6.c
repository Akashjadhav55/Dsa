// Q6: Print all numbers from 1-n whose binary representation has an even number of 1s.
// Input: An integer n
// Output: Numbers with even set bits

#include <stdio.h>

int count_ones(int i) {
    int count = 0;
    while (i > 0) {
        if (i % 2 == 1) {
            count++;
        }
        i = i / 2;
    }
    return count;
}

int main() {
    int n, i, count;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        count = count_ones(i);
        if (count % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}