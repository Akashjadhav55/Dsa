// Q3: Count vowels in a string recursively.
// Input: A string
// Output: Count of vowels

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(countVowels(s, 0));
    }

    static int countVowels(String s, int i) {
        if (i == s.length()) return 0;
        char c = Character.toLowerCase(s.charAt(i));
        int count = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
        return count + countVowels(s, i + 1);
    }
}
