// Q1: Reverse a string using recursion.
// Input: A string
// Output: Reversed string

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(reverseString(s, s.length() - 1));
    }

    static String reverseString(String s, int i) {
        if (i < 0) return "";
        return s.charAt(i) + reverseString(s, i - 1);
    }
}
