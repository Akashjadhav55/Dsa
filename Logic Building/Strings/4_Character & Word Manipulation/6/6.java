// Q6: Remove duplicate characters from a string.
// Input: A string
// Output: String without duplicates

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        boolean[] seen = new boolean[256];
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (!seen[c]) {
                seen[c] = true;
                result += c;
            }
        }
        System.out.println(result);
    }
}
