// Q2: Print numbers from n down to 1 using recursion.
// Input: An integer n
// Output: Numbers n to 1

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printNTo1(n);
    }

    static void printNTo1(int n) {
        if (n == 0) return;
        System.out.print(n + " ");
        printNTo1(n - 1);
    }
}
