// Q1: Remove all vowels from a string.
// Input: A string
// Output: String without vowels

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            char c = Character.toLowerCase(s.charAt(i));
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                result += s.charAt(i);
            }
        }
        System.out.println(result);
    }
}
