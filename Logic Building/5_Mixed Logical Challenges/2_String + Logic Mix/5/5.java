// Q5: Print characters that appear more than once (without map).
// Input: A string
// Output: Repeated characters

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().toLowerCase();
        int[] freq = new int[26];
        for (char c : s.toCharArray()) {
            if (c >= 'a' && c <= 'z') freq[c - 'a']++;
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 1) sb.append((char) (i + 'a')).append(" ");
        }
        System.out.println(sb.toString().trim());
    }
}
