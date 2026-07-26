// Q4: Print a triangle of stars recursively (bottom-up).
// Input: An integer n
// Output: Decreasing triangle of stars

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printTriangle(n);
    }

    static void printTriangle(int n) {
        if (n == 0) return;
        printRow(n);
        System.out.println();
        printTriangle(n - 1);
    }

    static void printRow(int cols) {
        if (cols == 0) return;
        System.out.print("* ");
        printRow(cols - 1);
    }
}
