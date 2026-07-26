// Q9: Generate Fibonacci series up to N using recursion.
// Input: An integer N
// Output: Fibonacci series up to N

import java.util.Scanner;

public class Main {
    static int fibonacci(int n) {
        if (n <= 1) return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 0;
        while (true) {
            int val = fibonacci(i);
            if (val > n) break;
            System.out.print(val + " ");
            i++;
        }
        System.out.println();
    }
}
