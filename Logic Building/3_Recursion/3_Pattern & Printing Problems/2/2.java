// Q2: Print a square of stars recursively (n x n).
// Input: An integer n
// Output: n x n grid of stars

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printSquare(n, n);
    }

    static void printSquare(int rows, int cols) {
        if (rows == 0) return;
        printRow(cols);
        System.out.println();
        printSquare(rows - 1, cols);
    }

    static void printRow(int cols) {
        if (cols == 0) return;
        System.out.print("* ");
        printRow(cols - 1);
    }
}
