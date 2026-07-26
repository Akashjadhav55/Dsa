// Q8: Count substrings that start and end with the same character.
// Input: A string
// Output: Count of such substrings

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                if (s.charAt(i) == s.charAt(j)) count++;
            }
        }
        System.out.println(count);
    }
}
