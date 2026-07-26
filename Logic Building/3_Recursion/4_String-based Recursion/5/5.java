// Q5: Replace all occurrences of a character (say 'a' -> 'x') recursively.
// Input: A string and characters to find/replace
// Output: Modified string

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char find = sc.next().charAt(0);
        char replace = sc.next().charAt(0);
        System.out.println(replaceChar(s, 0, find, replace));
    }

    static String replaceChar(String s, int i, char find, char replace) {
        if (i == s.length()) return "";
        if (s.charAt(i) == find) return replace + replaceChar(s, i + 1, find, replace);
        return s.charAt(i) + replaceChar(s, i + 1, find, replace);
    }
}
