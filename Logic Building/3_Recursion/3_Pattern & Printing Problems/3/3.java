// Q3: Print a triangle of stars recursively (top-down).
// Input: An integer n
// Output: Increasing triangle of stars

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printTriangle(n, 1);
    }

    static void printTriangle(int n, int i) {
        if (i > n) return;
        printRow(i);
        System.out.println();
        printTriangle(n, i + 1);
    }

    static void printRow(int cols) {
        if (cols == 0) return;
        System.out.print("* ");
        printRow(cols - 1);
    }
}
