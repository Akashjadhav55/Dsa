// Q2: Reverse a number recursively.
// Input: An integer
// Output: Reversed number

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(reverseNumber(n, 0));
    }

    static int reverseNumber(int n, int rev) {
        if (n == 0) return rev;
        return reverseNumber(n / 10, rev * 10 + n % 10);
    }
}
