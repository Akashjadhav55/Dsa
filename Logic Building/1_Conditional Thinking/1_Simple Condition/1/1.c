<<<<<<< Updated upstream
// Q1: Take a number and print whether it's positive, negative, or zero.
// Input: A single integer
// Output: "Positive", "Negative", or "Zero"

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
=======
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }

>>>>>>> Stashed changes
    return 0;
}