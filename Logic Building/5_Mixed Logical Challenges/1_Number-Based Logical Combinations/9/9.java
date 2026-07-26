// Q9: Check if a number is palindrome (121 -> true).
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int temp = num, rev = 0;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (num == rev)
            System.out.println("Palindrome");
        else
            System.out.println("Not a Palindrome");
    }
}
