// Q7: Calculate power of a number (x^n) using recursion.
// Input: Base x and exponent n
// Output: x raised to power n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        System.out.println(power(x, n));
    }

    static long power(int x, int n) {
        if (n == 0) return 1;
        return x * power(x, n - 1);
    }
}
