// Q9: Convert a string to uppercase recursively.
// Input: A string
// Output: Uppercase string

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(toUpperCase(s, 0));
    }

    static String toUpperCase(String s, int i) {
        if (i == s.length()) return "";
        char c = s.charAt(i);
        if (c >= 'a' && c <= 'z') c = (char)(c - 32);
        return c + toUpperCase(s, i + 1);
    }
}
