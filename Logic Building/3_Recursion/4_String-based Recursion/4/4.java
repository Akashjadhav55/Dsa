// Q4: Remove all spaces from a string recursively.
// Input: A string
// Output: String without spaces

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(removeSpaces(s, 0));
    }

    static String removeSpaces(String s, int i) {
        if (i == s.length()) return "";
        if (s.charAt(i) == ' ') return removeSpaces(s, i + 1);
        return s.charAt(i) + removeSpaces(s, i + 1);
    }
}
