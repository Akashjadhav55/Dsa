// Q8: Print numbers in increasing and decreasing order in same function.
// Input: An integer n
// Output: 1 to n then n to 1

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printIncDec(n);
    }

    static void printIncDec(int n) {
        if (n == 0) return;
        System.out.print(n + " ");
        printIncDec(n - 1);
        System.out.print(n + " ");
    }
}
