// Q4: Check whether a string is a palindrome.
// Input: A string
// Output: "Palindrome" or "Not a Palindrome"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        boolean isPalin = true;
        for (int i = 0; i < s.length() / 2; i++) {
            if (s.charAt(i) != s.charAt(s.length() - 1 - i)) {
                isPalin = false;
                break;
            }
        }
        System.out.println(isPalin ? "Palindrome" : "Not a Palindrome");
    }
}
