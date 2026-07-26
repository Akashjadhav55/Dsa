// Q9: Print sum of series 1 + 2 + 3 + ... + n recursively and display each step.
// Input: An integer n
// Output: Running sum at each step

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Sum = " + printSeries(n));
    }

    static int printSeries(int n) {
        if (n == 0) return 0;
        int sum = n + printSeries(n - 1);
        if (n != 0) System.out.print(n + (n == 1 ? "" : " + "));
        return n + printSeries(n - 1);
    }
}
