// Q6: Print reverse triangle pattern recursively.
// Input: An integer n
// Output: Reverse triangle

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printReverseTriangle(n, 1);
    }

    static void printReverseTriangle(int n, int i) {
        if (i > n) return;
        printSpaces(i - 1);
        printStars(n - i + 1);
        System.out.println();
        printReverseTriangle(n, i + 1);
    }

    static void printSpaces(int s) {
        if (s == 0) return;
        System.out.print("  ");
        printSpaces(s - 1);
    }

    static void printStars(int c) {
        if (c == 0) return;
        System.out.print("* ");
        printStars(c - 1);
    }
}
