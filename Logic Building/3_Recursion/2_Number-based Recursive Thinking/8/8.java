// Q8: Calculate the sum of first n even numbers recursively.
// Input: An integer n
// Output: Sum of first n even numbers

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(sumEven(n));
    }

    static int sumEven(int n) {
        if (n == 0) return 0;
        return (2 * n) + sumEven(n - 1);
    }
}
