// Q4: Replace every vowel in a string with its position (a=1, e=2...).
// Input: A string
// Output: Vowels replaced with positions

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().toLowerCase();
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            int pos = "aeiou".indexOf(c);
            if (pos != -1) sb.append(pos + 1);
            else sb.append(c);
        }
        System.out.println(sb.toString());
    }
}
