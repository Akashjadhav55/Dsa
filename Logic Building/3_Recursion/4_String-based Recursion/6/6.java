// Q6: Remove all occurrences of a character from a string recursively.
// Input: A string and a character
// Output: String without the character

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char ch = sc.next().charAt(0);
        System.out.println(removeChar(s, 0, ch));
    }

    static String removeChar(String s, int i, char ch) {
        if (i == s.length()) return "";
        if (s.charAt(i) == ch) return removeChar(s, i + 1, ch);
        return s.charAt(i) + removeChar(s, i + 1, ch);
    }
}
