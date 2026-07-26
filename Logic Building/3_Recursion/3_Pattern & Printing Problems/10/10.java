// Q10: Print pattern of characters (A, AB, ABC, ...) recursively.
// Input: An integer n
// Output: Alphabet sequence pattern

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printPattern(n, 1);
    }

    static void printPattern(int n, int i) {
        if (i > n) return;
        printChars(i);
        System.out.println();
        printPattern(n, i + 1);
    }

    static void printChars(int i) {
        if (i == 0) return;
        printChars(i - 1);
        System.out.print((char)('A' + i - 1) + " ");
    }
}
