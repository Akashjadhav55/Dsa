// Q10: Count consonants and vowels separately using recursion.
// Input: A string
// Output: Vowel count and consonant count

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int[] result = countVC(s, 0, 0, 0);
        System.out.println("Vowels: " + result[0]);
        System.out.println("Consonants: " + result[1]);
    }

    static int[] countVC(String s, int i, int v, int c) {
        if (i == s.length()) return new int[]{v, c};
        char ch = Character.toLowerCase(s.charAt(i));
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                return countVC(s, i + 1, v + 1, c);
            else
                return countVC(s, i + 1, v, c + 1);
        }
        return countVC(s, i + 1, v, c);
    }
}
