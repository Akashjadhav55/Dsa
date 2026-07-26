// Q8: Print characters that are common in two strings.
// Input: Two strings
// Output: Common characters

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next().toLowerCase();
        String s2 = sc.next().toLowerCase();
        int[] freq = new int[26];
        for (char c : s1.toCharArray()) freq[c - 'a']++;
        StringBuilder sb = new StringBuilder();
        for (char c : s2.toCharArray()) {
            if (freq[c - 'a'] > 0) {
                sb.append(c).append(" ");
                freq[c - 'a'] = 0;
            }
        }
        System.out.println(sb.toString().trim());
    }
}
