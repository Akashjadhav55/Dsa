// Q3: Print only even numbers from 1 to n recursively.
// Input: An integer n
// Output: Even numbers from 1 to n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printEven(1, n);
    }

    static void printEven(int i, int n) {
        if (i > n) return;
        if (i % 2 == 0) System.out.print(i + " ");
        printEven(i + 1, n);
    }
}
