// Q4: Simulate a simple calculator using switch-case.
// Input: Two numbers and an operator (+, -, *, /)
// Output: Result of the operation

#include <stdio.h>

int main() {
    float a, b;
    char op;
    scanf("%f", &a);
    scanf(" %c", &op);
    scanf("%f", &b);
    switch (op) {
        case '+':
            printf("%f\n", a + b);
            break;
        case '-':
            printf("%f\n", a - b);
            break;
        case '*':
            printf("%f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%f\n", a / b);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    return 0;
}