// Q3: Check if a number is a palindrome using recursion.
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (isPalindrome(n, n, 0)) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not a Palindrome");
        }
    }

    static boolean isPalindrome(int n, int original, int rev) {
        if (n == 0) return original == rev;
        return isPalindrome(n / 10, original, rev * 10 + n % 10);
    }
}
