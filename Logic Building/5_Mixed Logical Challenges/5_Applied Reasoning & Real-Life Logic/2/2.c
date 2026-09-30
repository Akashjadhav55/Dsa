// Q2: Take age inputs and count how many are adults, minors, seniors.
// Input: Number of people, then their ages
// Output: Count of adults (18-60), minors (<18), seniors (>60)

#include <stdio.h>

int main() {
    int ages[100], n, i, adults = 0, minors = 0, seniors = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }
    for (i = 0; i < n; i++) {
        if (ages[i] >= 18 && ages[i] <= 60) {
            adults++;
        } else if (ages[i] < 18) {
            minors++;
        } else if (ages[i] > 60) {
            seniors++;
        }
    }
    printf("Adults: %d\n", adults);
    printf("Minors: %d\n", minors);
    printf("Seniors: %d\n", seniors);
    return 0;
}