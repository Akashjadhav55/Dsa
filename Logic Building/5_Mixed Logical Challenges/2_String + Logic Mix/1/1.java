// Q1: Check if two strings are anagrams (without using collections).
// Input: Two strings
// Output: "Anagrams" or "Not Anagrams"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next().toLowerCase();
        String s2 = sc.next().toLowerCase();
        if (s1.length() != s2.length()) {
            System.out.println("Not Anagrams");
            return;
        }
        int[] freq = new int[26];
        for (char c : s1.toCharArray()) freq[c - 'a']++;
        for (char c : s2.toCharArray()) freq[c - 'a']--;
        for (int f : freq) {
            if (f != 0) { System.out.println("Not Anagrams"); return; }
        }
        System.out.println("Anagrams");
    }
}
