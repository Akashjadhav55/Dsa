// Q1: Print a line of n stars recursively.
// Input: An integer n
// Output: A line of n stars

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printStars(n);
    }

    static void printStars(int n) {
        if (n == 0) return;
        System.out.print("* ");
        printStars(n - 1);
    }
}
