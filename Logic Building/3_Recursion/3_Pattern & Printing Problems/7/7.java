// Q7: Print multiplication table of n recursively.
// Input: An integer n
// Output: Table of n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printTable(n, 1);
    }

    static void printTable(int n, int i) {
        if (i > 10) return;
        System.out.println(n + " x " + i + " = " + (n * i));
        printTable(n, i + 1);
    }
}
