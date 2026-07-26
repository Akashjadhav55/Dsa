// Q4: Print only odd numbers from 1 to n recursively.
// Input: An integer n
// Output: Odd numbers from 1 to n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printOdd(1, n);
    }

    static void printOdd(int i, int n) {
        if (i > n) return;
        if (i % 2 != 0) System.out.print(i + " ");
        printOdd(i + 1, n);
    }
}
