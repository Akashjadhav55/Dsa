// Q4: Simulate a simple calculator using switch-case.
// Input: Two numbers and an operator (+, -, *, /)
// Output: Result of the operation

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        char op = sc.next().charAt(0);
        double b = sc.nextDouble();
        switch (op) {
            case '+': System.out.println(a + b); break;
            case '-': System.out.println(a - b); break;
            case '*': System.out.println(a * b); break;
            case '/':
                if (b != 0) System.out.println(a / b);
                else System.out.println("Cannot divide by zero");
                break;
            default: System.out.println("Invalid operator");
        }
    }
}
