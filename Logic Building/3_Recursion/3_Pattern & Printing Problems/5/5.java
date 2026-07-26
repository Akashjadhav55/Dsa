// Q5: Print pattern of numbers recursively (1 to n each row).
// Input: An integer n
// Output: Number pattern

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printPattern(n, 1);
    }

    static void printPattern(int n, int i) {
        if (i > n) return;
        printNums(i);
        System.out.println();
        printPattern(n, i + 1);
    }

    static void printNums(int j) {
        if (j == 0) return;
        printNums(j - 1);
        System.out.print(j + " ");
    }
}
