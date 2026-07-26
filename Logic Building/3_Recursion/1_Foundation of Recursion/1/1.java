// Q1: Print numbers from 1 to n using recursion.
// Input: An integer n
// Output: Numbers 1 to n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        print1ToN(n);
    }

    static void print1ToN(int n) {
        if (n == 0) return;
        print1ToN(n - 1);
        System.out.print(n + " ");
    }
}
