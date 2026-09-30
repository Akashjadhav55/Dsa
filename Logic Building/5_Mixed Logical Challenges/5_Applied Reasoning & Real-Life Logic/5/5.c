// Q5: Count how many times a coin lands on heads/tails (use random).
// Input: Number of tosses
// Output: Count of heads and tails

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, heads, tails;
    scanf("%d", &n);
    heads = 0;
    tails = 0;
    for (i = 0; i < n; i++) {
        if (rand() / (RAND_MAX + 1.0) < 0.5) {
            heads++;
        } else {
            tails++;
        }
    }
    printf("Heads: %d\n", heads);
    printf("Tails: %d\n", tails);
    return 0;
}